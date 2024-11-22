#include <iostream>

using namespace std;

int* insertion_Sort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];

        int j = i - 1;

        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    return arr;
}

int main()
{
    int n;
    cout << "Please enter the size of an array : ";
    cin >> n;

    int arr[n];

    cout << "Please enter the value of an array : ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int *inserSort = insertion_Sort(arr, n);

    cout << "Sorted Array is ";

    for(int i = 0; i < n; i++)
    {
        cout << inserSort[i] << " ";
    }
    cout << endl;


}
