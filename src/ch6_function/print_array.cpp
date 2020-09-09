#include <iostream>
#include <iterator>
#include <vector>

using namespace std;
//using Iter=vector<int>::const_iterator;
#define SIZE 7
void print_by_indentical(const int * a);
void print_by_lib(const int * begin,const int * end);
void print_by_arg(const int * a,size_t size);
void print_by_ref(int (&arr)[SIZE]);
void print_by_recursion(vector<int>::const_iterator beg,vector<int>::const_iterator end);

int main(int argc, char const *argv[])
{
        int a[SIZE]={1,2,3,4,5,6,0};
        vector<int> arr={4,5,6,0};
        print_by_indentical(a);
        print_by_lib(begin(a),end(a));
        print_by_arg(a,SIZE);
        print_by_ref(a);
        print_by_recursion(arr.cbegin(),arr.cend());
        return 0;
}
void print_by_indentical(const int * a)
{
        if(a){
                while(*a){
                        cout<<*a++<<" ";
                }
        }
        cout<<endl;
}
void print_by_lib(const int * begin,const int * end)
{
        for(;begin!=end;begin++){
                cout<<*begin<<" ";
        }
        cout<<endl;
}
void print_by_arg(const int * a,size_t size)
{
        unsigned i=0;
        for(;i<size;i++){
                cout<<a[i]<<" ";
        }
        cout<<endl;
}
void print_by_ref(int (&arr)[SIZE])
{
        for(auto i:arr){
                cout<<i<<" ";
        }
        cout<<endl;
}
void print_by_recursion(vector<int>::const_iterator beg,vector<int>::const_iterator end)
{
        if(beg!=end){
                cout<<*beg<<" ";
                print_by_recursion(++beg,end);
        }
}