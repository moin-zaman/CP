#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {2, 6, 8, 1, 20};

    int *a = arr;

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr+i);
    }

    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", &arr[0+i]);
    }

    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");



    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(a+i));
    }




}
