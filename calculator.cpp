#include<iostream>
using namespace std;

class Calculator
{
    public:
    int a,b;

    void accept()
    {
        cout<<"Enter Two Number:";
        cin>>a>>b;
    }

    void calculate()
    {
        cout<<"Addition="<<a+b<<endl;
        cout<<"Subtraction="<<a-b<<endl;
        cout<<"Multiplication="<<a*b<<endl;
        cout<<"Division="<<a/b<<endl;
        cout<<"modulus="<<a%b;
    }
};

int main()
{
    Calculator c;
    c.accept();
    c.calculate();
    return 0;
}