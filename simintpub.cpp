#include <iostream>
using namespace std;

class Interest
{
public:
    float principal, rate, time;

    void accept()
    {
        cout << "Enter Principal: ";
        cin >> principal;
        cout << "Enter Rate: ";
        cin >> rate;
        cout << "Enter Time: ";
        cin >> time;
    }

    void calculate()
    {
        float SI = (principal * rate * time) / 100;
        cout << "Simple Interest = " << SI;
    }
};

int main()
{
    Interest i;
    i.accept();
    i.calculate();
    return 0;
}