#include <iostream>

using namespace std;

int* getValue()
{
    int x = 20;
    return &x;
}

int main()
{
    int *p = getValue();
    cout << *p << endl;
}
