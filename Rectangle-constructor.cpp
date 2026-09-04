#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:

    // Parameterized Constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // Calculate Area
    void area()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main()
{
    int length, breadth;

    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Breadth: ";
    cin >> breadth;

    // Passing user input to constructor
    Rectangle r(length, breadth);

    r.area();

    return 0;
}