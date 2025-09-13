#include <stdio.h>
#include <stdlib.h>


change()
{
    int *px;
    px = (int*)malloc(sizeof(int));

    *px = 30;

    return px;
}

int main()
{
    int *p = change();
    printf("%d\n", *p);
}
