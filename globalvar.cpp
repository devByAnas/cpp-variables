#include <iostream>
using namespace std;

int y = 20; // global variable declared outside function
void func()
{
    // accessing global variable inside the function
    cout << "Value of y inside function : " << y << endl;
}

int main()
{
    cout << "Value of y in main : " << y << endl; // accessing global variable in main
    func(); // calling the function to demonstrate global variable usage
    return 0;
}