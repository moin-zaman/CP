#include <iostream>

using namespace std;

void passByValue(int x)
{
    x = 20;
}

void passByReference(int *b)
{
    *b = 50;
}

int main()
{
    int y = 10;
    passByValue(y);
    cout <<"After passing a value y = " << y << endl;


    int a = 30;
    passByReference(&a);
    cout << "After passing a reference a = " << a << endl;

}
