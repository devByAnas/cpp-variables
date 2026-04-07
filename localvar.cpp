#include <iostream>
using namespace std;

void func()
{
    int x = 10; // local variable declared inside the function
    cout << "Value of x inside function : " << x << endl;
}

int main()
{
    func(); // calling the function to demonstrate local variable usage
    return 0;
}

