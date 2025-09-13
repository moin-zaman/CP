#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 8;
    int *px = &x;
    printf("%d\n", &x);
    printf("%d\n", px);


//    ++(*px);

    //--(px);

    ++(px);

    printf("%d\n", px);

    char ch = 'A';
    char *cx = &ch;

    //++(*cx);

    ++(cx);

    printf("%c\n", cx);

}
