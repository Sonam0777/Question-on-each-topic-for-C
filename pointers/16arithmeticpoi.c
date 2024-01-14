#include <stdio.h>
int main()
{
    float a = 10.5, b = 10.5;
    float *f1,*f2;
    f1=&a;
    f2=&b;
    if(f1<f2)
    {
        printf("%u is less than %u",f1,f2);
    }
    if(f1>f2)
    {
        printf("%u is greater than %u",f1,f2);
    }
    if(f1==f2)
    {
        printf("Impossible");
    }
    printf("\n%d",f1-f2);

    return 0;
}