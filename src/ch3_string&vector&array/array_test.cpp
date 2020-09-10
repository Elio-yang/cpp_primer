#include<iostream>
#include<string>
#include <vector>
#include<iterator>

using namespace std;

bool compare(int * const beg1,int * const end1,\
int * const beg2,int * const end2);


int main(int argc, char const *argv[])
{
        int a1[3]={0,1,2};
        int a2[3]={0,1,2};
        int a3[3]={0,1,3};
        int a4[4]={1,2,3,4};

        cout<<"a1==a2 "<<compare(begin(a1),end(a1),begin(a2),end(a2))<<endl;
        cout<<"a2==a3 "<<compare(begin(a2),end(a2),begin(a3),end(a3))<<endl;
        cout<<"a3==a4 "<<compare(begin(a3),end(a3),begin(a4),end(a4))<<endl;

        string s("hello world");
        const char * str=s.c_str();

        
        return 0;
}

bool compare(int * const beg1,int * const end1,\
int * const beg2,int * const end2)
{
        int *i=beg1,*j=beg2;
        if((end1-beg1)!=(end2-beg2)){
                return false;
        }
        else{
                for(;i!=end1&&j!=end2;++i,++j){
                        if(*i!=*j){
                                return false;
                        }
                }
        }
        return true;
}