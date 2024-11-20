#include <iostream>

using namespace std;

int Linear_Search(int *a, int s, int x)
{
    for(int i = 0; i < s; i++)
    {
        if(x == *(a+i))
        {
            return i;
        }
    }
    int count  = -1;
    return count;

}

int main()
{
    int s,x;
    cout << "Please enter the Size of an array : ";
    cin >> s;

    int arr[s];
    cout << "Please enter the value of an Array : ";
    for(int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }

    cout << "Please enter the value you want to search : ";
    cin >> x;


    int index = Linear_Search(arr, s, x);

    if(index != -1)
    {
        cout << "Value " << x << " found at index " << index << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }



}
