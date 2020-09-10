#include <iostream>
#include <stdexcept>

using namespace std;

int main(int argc, char const *argv[])
{
        int a,b;
        double result;
        while(cin >>a>>b){
                try{
                        if(b==0){
                                throw runtime_error("the number be devided can't be zero");
                        }
                }catch(runtime_error err){
                        cout<< err.what()<<"please try again"<<endl;
                        cin>>b;
                        if(b!=0){
                                break;
                        }
                }
                result=static_cast<double>(a)/b;
                cout<<"result="<<result<<endl;
        }

        return 0;
}
