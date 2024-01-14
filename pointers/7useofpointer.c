#include <stdio.h>
int main()
{
    int a=10, b=20;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    printf("a=%d\tb=%d\ta=%p\tb=%p\t*pa=%d\t*pb=%d\ta+b=%d\t*pa+*pb=%d",a,b,pa,pb,*pa,*pb,a+b,*pa+*pb);
    return 0;
}