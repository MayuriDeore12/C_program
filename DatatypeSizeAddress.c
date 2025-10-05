#include<stdio.h>

int main()
{
    char cValue ='S';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.876543;


    printf("Size of charaters is:%ld\n", sizeof(cValue));
    printf("Size of integer is:%ld\n", sizeof(iValue));
    printf("Size of float is:%ld\n", sizeof(fValue));
    printf("Size of double is:%ld\n", sizeof(dValue));


    printf("Address of cValue is: %lu\n", &cValue);
    printf("Address of iValue is: %lu\n", &iValue);
    printf("Address of fValue is: %lu\n", &fValue);
    printf("Address of dValue is: %lu\n", &dValue);




    return 0;

}