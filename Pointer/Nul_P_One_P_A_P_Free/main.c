#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = 'a';
    char *c = NULL;
    c = &ch;

    char *p = NULL;
    printf("%d\n", p);


//    printf("%d\n", &ch);
//    printf("%d\n", c);


    int x = 10;
    int *p1 = &x;
    int *p2;
    p2 = p1;

    *p2 = 20;
//    printf("%d\n", x); //20

    int *px = (int*) malloc(sizeof(int));
    free(px);

    px = NULL;
    printf("%d\n", px);

}
