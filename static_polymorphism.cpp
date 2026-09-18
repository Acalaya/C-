#include <iostream>
using namespace std;

class Calculator {
public:
    // Form 1: Adds two integers
    int add(int a, int b) {
        return a + b;
    }
    // Form 2: Adds three integers (Different number of arguments)
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    cout << calc.add(5, 10) << endl;     // Compiler calls Form 1
    cout << calc.add(5, 10, 20) << endl; // Compiler calls Form 2
    return 0;
}
