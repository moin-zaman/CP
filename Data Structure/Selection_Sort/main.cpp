#include <iostream>

using namespace std;

void Selection_Sort(int* A, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
        {
            if(*(A + min) > *(A + j))
            {
                min = j;
            }
        }

        if(min != i)
        {
            int temp = *(A + i);
            *(A + i) = *(A + min);
            *(A + min) = temp;
        }
    }

    cout << "Sorted Array using Selection Sort : ";
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    puts("");
}


int main()
{
    int n;
    cout << "please enter the size of an array : ";
    cin >> n;

    int A[n];

    cout << "Please enter the value of an array : ";

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }


    Selection_Sort(A, n);


}
