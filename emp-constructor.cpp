#include<iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

    public:

    Employee()
    {
        id=129;
        name="Sonal";
        salary=100000;
    }

    Employee(int i,string n,float s)
    {
        id=i;
        name=n;
        salary=s;
    }

    Employee(Employee &e)
    {
        id=e.id;
        name=e.name;
        salary=e.salary;
    }

    //Display Function
    void display()
    {
        cout<<"ID="<<id<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Salary="<<salary<<endl;
    }
};
int main()
{
    //Default Constructor
    Employee e1;

    cout<<"Default Constructor:"<<endl;
    e1.display();

    //Parameterized Constructor
    Employee e2(129,"sonal",100000);

    cout<<"\nParameterized Constructor:"<<endl;
    e2.display();

    //Copy Constructor
    Employee e3(e2);

    cout<<"\nCopy Constructor:"<<endl;
    e3.display();

    return 0;
}
