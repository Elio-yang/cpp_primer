#include <iostream>
#include <string>

using namespace std;

class Student{
private:
        int id;
        string name;
        bool gender;
public:
        void display()
        {
                cout<<"id   :   "<<id<<endl;
                cout<<"name  :   "<<name<<endl;
                cout<<"gender:   "<<gender<<endl;
        }
};
 
class Student2{
private:
        int id;
        string name;
        bool gender;
public:
        void display();
};
inline void Student2::display()
{
        cout<<"id    :   "<<id<<endl;
        cout<<"name  :   "<<name<<endl;
        cout<<"gender:   "<<gender<<endl;
}


int main()
{

        
        return 0;
}