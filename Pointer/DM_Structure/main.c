#include <stdio.h>
#include <stdlib.h>

struct myStruct{
    int age;
    double height;
};

int main()
{
    struct myStruct s1;
    s1.age = 10; s1.height = 5.6;

    struct myStruct *ps1;

    ps1 = &s1;
//    (*ps1).age  = 21;
    ps1 -> age = 21;

//    (*ps1).height = 5.1;
    ps1 -> height = 5.1;

    printf("%d\n", s1.age);
    printf("%.1lf\n", s1.height);

    printf("%d\n", (*ps1).age);
    printf("%.1lf\n", ps1 -> height);


    struct myStruct *s;
    s = (struct myStruct*) malloc(sizeof(struct myStruct));
    s -> age = 40;
    s -> height = 5.8;

    printf("%d\n", s -> age);
    printf("%.1lf\n", s -> height);

}
