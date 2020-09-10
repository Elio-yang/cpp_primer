#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*convert a string to char* */
char* ptrS(string s)
{
        string::size_type size=s.size();
        char* str=(char*)malloc(sizeof(char)*(size+1));
        int i=0;
        for(auto c:s){
                str[i++]=c;
        }
        str[i]='\0';
        return str;
        
}
int main(int argc , char *argv[])
{
        /*===============init a string===============*/
        /*empty string*/
        string s1;
        cout<<s1<<endl;
        /*copy:拷贝初始化（有等号的）*/
        string s2=s1;
        cout<<s2<<endl;
        /*value*/
        string s3("value");     //直接初始化（不使用等号）
        cout<<s3<<endl;
        //除了结尾的空字符，都会被拷贝到s3中
        string s4="value";
        cout<<s4<<endl;
        //等价于s4("value")
        /*连续的4个字符c*/
        string s5(4,'c');
        cout<<s5<<endl;
        /*===============operations on string ===============*/
        s1="hello this is a string 1";
        cout<<s1<<endl;
        s2="hello This is a string 2";
        cout<<s2<<endl;
        //getline(cin,s3);
        //cout<<s3<<endl;

        cout<<"s1.empty="<<s1.empty()<<endl;
        cout<<"s1.size="<<s1.size()<<endl;
        cout<<"5th char of s1 is "<<s1[4]<<endl;
        cout<<"s1+s2= "+s1+s2<<endl;
        cout<<"s1 equals to s2= "+to_string(s1==s2)<<endl;
        cout<<"s1<s2 = "+to_string(s1<s2)<<endl;

        s3="A";
        s4="a";
        cout<<to_string(s3<s4)<<endl;

        //cin>>s5;
        /*遇到空白停止*/
        //cout<<s5<<endl;

//        string s6;
//        string s7;
//        cin>>s6>>s7;
//        cout<<s6<<s7<<endl;

        // string s8;
        // //跳出循环，Linux下Ctrl+D
        // while (cin>>s8){
        //         cout<<s8<<endl;
        // }

        // string line;
        // while (getline(cin,line)){
        //         cout<<line<<endl;
        //         //string::size_type size=line.size();
        //         auto size=line.size();
        //         decltype(line.size()) size2=line.size();

        //         cout<<"line.size()= "<<size<<endl;
        //         cout<<"line.size()= "<<size2<<endl;
        // }

        string s="hello world this is a test";
        
        char* str=ptrS(s);
        printf("%s\n",str);
        return 0;
} 