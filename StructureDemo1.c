#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};
int main()

{
    struct Demo obj;
     printf("Size of demo is :  %lu\n", sizeof(struct Demo)); //12

     printf("size of object : %lu\n", sizeof(obj)); //12




    return 0;

}