#include <stdio.h>
int main()
{
    int a = 99;
    int *pa,*qa;
    pa = &a;
    qa = pa;
    printf("a=%d\t*pa = %d\t*qa=%d",a,*pa,*qa);
    return 0;
}