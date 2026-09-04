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

int main()
{
    SavingAccount sa(101, "Sonal", 5000, 5);

    sa.deposit(1000);
    sa.withdraw(500);
    sa.calculateInterest();
    sa.display();

    return 0;
}