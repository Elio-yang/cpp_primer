#include <iostream>
#include <iterator>
#include <initializer_list>

using namespace std;

void print_string(initializer_list<string> va_s);
int main(int argc, char const *argv[])
{
        initializer_list<string> ini_1={"string","hello","this"};
        print_string(ini_1);
        return 0;
}
void print_string(initializer_list<string> va_s)
{
        auto beg=va_s.begin();
        auto end=va_s.end();
        for(;beg!=end;++beg){
                cout<<*beg<<" ";
        }
        cout<<endl;
}