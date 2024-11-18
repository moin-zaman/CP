#include <iostream>
#include <vector>
#define sizee 3

using namespace std;

int main()
{
//    int arr[size];
//    arr[0] = 1;
//    arr[1] = 2;
//    arr[2] = 3;
//
//    cout << arr[0] << endl;

    vector <int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;

    vec[0] = 50;
    cout << vec[0] << endl;

    cout << vec.size() << endl;

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

}
