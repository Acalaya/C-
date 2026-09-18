#include <iostream>
using namespace std;

// Base Class
class Parent {
protected:
    int parentValue;
public:
    // Parameterized constructor of the base class
    Parent(int p) {
        parentValue = p;
        cout << "[Execution 1] Parent class constructor executed. Value: " << parentValue << endl;
    }
};

// Derived Class
class Child : public Parent {
private:
    int childValue;
public:
    // Mandatory derived constructor passing arguments to the Base class
    // using the member initialization list format ': Parent(p)'
    Child(int p, int c) : Parent(p) {
        childValue = c;
        cout << "[Execution 2] Child class constructor executed. Value: " << childValue << endl;
    }
};

int main() {
    
    // Instantiating the derived class object
    Child obj(100, 200);
    
    return 0;
}
