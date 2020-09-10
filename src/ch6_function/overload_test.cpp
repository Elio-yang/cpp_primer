#include <iostream>
#include <string>

using namespace std;

const string &shorter_string(const string &s1,const string &s2);
string &shorter_string(string &s1,string &s2);

int main()
{

        return 0;
}
const string &shorter_string(const string &s1,const string &s2)
{
        return s1.size()<=s2.size()?s1:s2;
}
string &shorter_string(string &s1,string &s2)
{
        auto &r =shorter_string(const_cast<const string&>(s1),const_cast<const string&>(s2));
        return const_cast<string&>(r);

}
