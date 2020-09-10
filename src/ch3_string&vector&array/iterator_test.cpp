#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
        string s("hello World");
        for(auto it=s.begin();it!=s.end()&&!isspace(*it);++it){
                *it=toupper(*it);
        }
        cout<<s<<endl;
        vector<int> data={1,4,6,9,13,45,68,98};
        int sought=data[4];
        auto begin=data.begin();
        auto end=data.end();
        auto mid=begin+(end-begin)/2;
        while(mid!=end&&*mid!=sought){
                if(sought<*mid){
                        end=mid-1;
                } 
                else if (sought> *mid){
                        begin=mid+1;
                }
                mid=begin+(end-begin)/2;
        }
        printf("%d",*mid);
        return 0;
}
