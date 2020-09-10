#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<string> foo(){
        string s1("Hello");
        string s2("world");
        return {s1,s2};
}
int main(int argc, char *argv[])
{
        cout<<argv[1]<<argv[2]<<endl;
        vector<string> vs=foo();
        for(auto i:vs){
                cout<<i<<" ";
        }
        cout<<endl;
        return 0;
}
