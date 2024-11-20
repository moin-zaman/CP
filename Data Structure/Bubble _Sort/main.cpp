#include <iostream>

using namespace std;

int *Bubble_Sort(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int count = 0;

        for(int j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                count++;
            }
        }
        if(count == 0)

        {
            return a;
            break;
        }
    }

    return a;
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

    int *SortedBubble = Bubble_Sort(arr, s);

    for(int i = 0; i < s; i++)
    {
        cout << SortedBubble[i] << "\t";
    }

    puts("");


}
