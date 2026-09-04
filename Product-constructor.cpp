#include <iostream>
using namespace std;

class Product
{
    int id;
    string name;
    float price;
    int quantity;

public:

    // Default Constructor
    Product()
    {
        id = 0;
        name = "Unknown";
        price = 0;
        quantity = 0;
    }

    // Parameterized Constructor
    Product(int i, string n, float p, int q)
    {
        id = i;
        name = n;
        price = p;
        quantity = q;
    }

    // Copy Constructor
    Product(Product &p)
    {
        id = p.id;
        name = p.name;
        price = p.price;
        quantity = p.quantity;
    }

    // Display and Calculate Total Cost
    void display()
    {
        cout << "ID = " << id << endl;
        cout << "Name = " << name << endl;
        cout << "Price = " << price << endl;
        cout << "Quantity = " << quantity << endl;
        cout << "Total Cost = " << price * quantity << endl;
    }
};

int main()
{
    // Default Constructor
    Product p1;

    cout << "Default Constructor:" << endl;
    p1.display();

    // Parameterized Constructor
    Product p2(101, "Pen", 20, 5);

    cout << "\nParameterized Constructor:" << endl;
    p2.display();

    // Copy Constructor
    Product p3(p2);

    cout << "\nCopy Constructor:" << endl;
    p3.display();

    return 0;
}