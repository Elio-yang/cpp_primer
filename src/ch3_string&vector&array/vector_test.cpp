#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
        vector<int> v1;
        vector<string>v2(5,"hello");

        vector<int>v3(10,2);
        for(auto i:v3){
                cout<<i ;
        }
        cout<<endl;
        v1=v3;
        vector<vector<int>>v4={v1,v3};
        for(auto i:v4){
                for (auto j:i){
                        cout<<j;
                }
                cout<<endl;
        }

        vector<string> v5={"a","b","c","d"};
        vector<vector<string>> v6={v2,v5};
         for(auto i:v6){
                for (auto j:i){
                        cout<<"  "+j;
                }
                cout<<endl;
        }
        vector<int>test;
        for(int i=0;i<=100;i++){
                if(i%2==0){
                        test.push_back(i);
                }
        }
        for(auto i:test){
                cout<<i<<" "<<endl;
        }
        v1={1,3,5,7,9};
        for(auto &i:v1){
                i*=i;
        }
        for(auto i:v1){
                cout <<i<<" "<<endl;
        }

        // vector<unsigned int> cnt(11,0);
        // unsigned int grade;
        // while(cin>>grade){
        //         /*ctrl + D to stop*/
        //         ++cnt[grade/10];
        // }
        // for(auto i: cnt){
        //         cout<<i<<" "<<endl;
        // }

        cout<<"v1";
        for(auto i: v1){
                cout<<i<<" "<<endl;
        }
        v1.pop_back();
        cout<<"v1 after pop_back";
        for(auto i: v1){
                cout<<i<<" "<<endl;
        }      
        return 0;
}
