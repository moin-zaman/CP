#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int ar[3] = {4, 8, 9};

    //int *px =(int*)malloc(3*sizeof(int));
    //printf("%d\n", px);

    printf("Please enter the size of array : ");
    int x;
    scanf("%d", &x);

    int *arr2 =(int*)malloc(x*sizeof(int));

    *arr2 = 4;
    *(arr2 + 1) = 8;
    arr2[2] = 9;

    printf("%d\n", *arr2);
    printf("%d\n", *(&arr2[1]));
    printf("%d\n", *(++arr2+1));





//    *px = 4;
//    printf("%d\n", *px);
//
//    ++(px);
//    printf("%d\n", px);
//
//    *px = 8;
//
//    printf("%d\n", *px);



}
