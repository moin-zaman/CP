#include <iostream>

using namespace std;

int Binary_Search(int *a, int s, int x)
{
    int l = 0, r = s-1, m;

    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(x == *(a + mid))
        {
            return mid;
        }
        else if( x > *(a + mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return -1;
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

    int ind = Binary_Search(arr, s, x);

    if(ind  == -1)
    {
        cout << "Value not found" << endl;
    }
    else
    {
        cout << "Value " << x << " found at index " << ind << endl;
    }


}
