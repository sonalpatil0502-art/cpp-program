#include<iostream>
using namespace std;
class LibraryBook
{
    string name;
    bool issued = false;

    public:
    void input()
    {
        cout<<"Book Name:";
        cin>>name;
    }
    void issue()
    {
     issued = true;
     cout<<"Book Issued Successfully"<<endl;  
    }
    void returnBook()
    {
        issued = false;
        cout<<"Book Returned Successfully"<<endl;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<(issued? "Issued": "Available")<<endl;
    }
};
int main()
{
    LibraryBook b;
    b.input();
    b.issue();
    b.display();
    b.returnBook();
    b.display();

    return 0;
}