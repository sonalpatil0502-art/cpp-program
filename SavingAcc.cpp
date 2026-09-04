#include <iostream>
using namespace std;

class SavingAccount
{
    int accno;
    string name;
    float balance;
    float intRate;

public:

    // Parameterized Constructor
    SavingAccount(int a, string n, float b, float r)
    {
        accno = a;
        name = n;
        balance = b;
        intRate = r;
    }

    // Deposit
    void deposit(float amount)
    {
        balance = balance + amount;
    }

    // Withdraw
    void withdraw(float amount)
    {
        balance = balance - amount;
    }

    // Calculate Interest
    void calculateInterest()
    {
        float interest;
        interest = balance * intRate / 100;
        balance = balance + interest;
    }

    // Display
    void display()
    {
        cout << "\nAccount Number: " << accno;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance;
    }
};


class CheckingAccount
{
    int accno;
    string name;
    float balance;
    int transaction;

    public:
      CheckingAccount(int a,string n,float b)
      {
        accno=a;
        name=n;
        balance=b;
        transaction=0;
      }

      void deposit(float amount)
      {
        balance=balance + amount;
        transaction++;
      }

      void withdraw(float amount)
      {
        balance=balance-amount;
        transaction++;
      }

      void display()
      {
        if(transaction>5)
        {
            balance=balance-(transaction-5)*1;
        }
        cout<<"\n\nChecking Account";
        cout<<"\nAccount Number:"<<accno;
        cout<<"\nName:"<<name;
        cout<<"\nTransactions:"<<transaction;
        cout<<"\nBalance:"<<balance;
      }
};

int main()
{
    SavingAccount sa(101, "Sonal", 5000, 5);

    sa.deposit(1000);
    sa.withdraw(500);
    sa.calculateInterest();
    sa.display();
    
    CheckingAccount ca(102,"Sonal",5775);

    ca.deposit(1000);
    ca.withdraw(500);
    ca.deposit(500);
    ca.withdraw(200);
    ca.deposit(300);
    ca.withdraw(100);
    ca.display();

    return 0;
}