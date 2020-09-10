#include <iostream>
using namespace std;

using arrT=int[10];

int arr1[10]={1,2,3,4,5,6,7,8,9,10};

arrT* fun1(int i);
int (*func2(int i))[10];
auto func3(int i)->int(*)[10];

int main(int argc, char const *argv[])
{
        int(*Arr)[10]=fun1(2);
        for(int i=0;i<10;i++){
                cout<<(*Arr)[i]<<" ";
        }
        cout<<endl;
        int(*Brr)[10]=func2(3);
        for(int i=0;i<10;i++){
                cout<<(*Brr)[i]<<" ";
        }
        cout<<endl;
        int(*Crr)[10]=func3(6);
        for(int i=0;i<10;i++){
                cout<<(*Crr)[i]<<" ";
        }
        cout<<endl;
        return 0;
}
arrT* fun1(int i)
{
        arr1[i]=20;
        return &arr1;
}
int (*func2(int i))[10]
{
        arr1[i]=30;
        return &arr1;
}
auto func3(int i)->int(*)[10]
{
        arr1[i]=40;
        return &arr1;
}