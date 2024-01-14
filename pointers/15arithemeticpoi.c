#include <stdio.h>
int main()
{
    float a[]={1,2,3,4,5};
    float *f1,*f2;
    f1 = a;
    f2 = a+3;
    printf("%d\n",f2-f1);
    printf("%d\n",f1-f2);
    printf("%f\t%f",*f1,*f2);
    return 0;
}