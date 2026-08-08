#include <iostream>
using namespace std;

class Result
{
public:
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    void accept()
    {
        cout << "Enter Marks of 5 Subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void calculate()
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;

        cout << "Total = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;

        if (m1 >= 35 && m2 >= 35 && m3 >= 35 && m4 >= 35 && m5 >= 35)
            cout << "Result: Pass";
        else
            cout << "Result: Fail";
    }
};

int main()
{
    Result r;
    r.accept();
    r.calculate();
    return 0;
}