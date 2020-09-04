#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char const *argv[])
{       
        vector<int> Data;
        int data;
        while(cin>>data){
                Data.push_back(data);
        }
        unsigned size=Data.size();

        for(auto i=0; i<size-1;i++){
                cout<<Data[i]+Data[i+1]<<" ";
        }
        cout<<endl;

        unsigned m=0;
        unsigned n=size-1;
        while(m<=n){
                cout<<Data[m]+Data[n]<<" ";
                m++;
                n--;
        }
        cout<<endl;
        
        return 0;
}
