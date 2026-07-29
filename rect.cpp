#include <iostream>
using namespace std;

int main() 
{
    float l, b;
    cout << "Enter length and breadth: ";
    cin >> l >> b;

    cout << "Area = " << l * b << endl;
    cout << "Perimeter = " << 2 * (l + b);

    return 0;
}