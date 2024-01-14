#include <stdio.h>
int main()
{
    int *p, x;
    p = &x;
    printf("Enter x:\t");
    scanf("%d", p);
    printf("\n The value of x is %d\n",*p);
    printf("\n address of x:%u\n",p);
    printf("p+1 = %u\n",p+1);
    printf("p-5=%u\n",p-5);
    return 0;
}