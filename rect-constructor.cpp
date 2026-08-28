#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:

    // 1. Default Constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // 2. Parameterized Constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // 3. Copy Constructor
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    // Display Area
    void area()
    {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Area = " << length * breadth << endl;
    }
};

int main()
{
    int length, breadth;

    // User Input
    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Breadth: ";
    cin >> breadth;

    // Default Constructor
    Rectangle r1;

    cout << "\nDefault Constructor:" << endl;
    r1.area();

    // Parameterized Constructor
    Rectangle r2(length, breadth);

    cout << "\nParameterized Constructor:" << endl;
    r2.area();

    // Copy Constructor
    Rectangle r3(r2);

    cout << "\nCopy Constructor:" << endl;
    r3.area();

    return 0;
}
