// C++ program to illustrate how to access the private
// members of the base class by declaring the derived class
// as friend class in the base class
#include <iostream>
using namespace std;

// Forward declaration of the Derived class
class Derived;

// Base class
class Base {
private:
    int privateVar;

public:
    // Constructor to initialize privateVar
    Base(int val)
        : privateVar(val)
    {
    }

    // Declare Derived class as a friend
    friend class Derived;
};

// Derived class
class Derived {
public:
    // Function to display the private member of the base
    // class
    void displayPrivateVar(Base& obj)
    {
        // Accessing privateVar directly since Derived is a
        // friend of Base
        cout << "Value of privateVar in Base class: "
             << obj.privateVar << endl;
    }

    // Function to modify the private member of the base
    // class
    void modifyPrivateVar(Base& obj, int val)
    {
        // Modifying privateVar directly since Derived is a
        // friend of Base
        obj.privateVar = val;
    }
};

int main()
{
    // Create an object of Base class
    Base baseObj(10);

    // Create an object of Derived class
    Derived derivedObj;

    // Display the initial value of privateVar
    derivedObj.displayPrivateVar(baseObj);

    // Modify the value of privateVar
    derivedObj.modifyPrivateVar(baseObj, 20);

    // Display the modified value of privateVar
    derivedObj.displayPrivateVar(baseObj);

    return 0;
}
