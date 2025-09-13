
#include <stdio.h>
#include <stdlib.h>


struct myStruct
{
    char name[50];
    int age;
    double height;
};

int main()
{
    struct myStruct s1;
    struct myStruct s2;

    strcpy(s1.name, "Moin");
    printf("%s\n", s1.name);

    s1.age  = 20;
    printf("%d\n", s1.age);


    s2.height = 20.54;
    printf("%.2lf\n", s2.height);
}
