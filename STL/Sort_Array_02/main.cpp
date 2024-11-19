#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[5] = {2, 5, 7, 3, 1};

//    sort(arr, arr+5);

    sort(arr+2, arr+5);

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }





//    sort(arr, arr+4);
//
//    for(int i = 0; i < 5; i++)
//    {
//        cout << arr[i] << "\t";
//    }

}
