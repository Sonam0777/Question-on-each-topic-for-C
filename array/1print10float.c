#include <stdio.h>
int main()
{
    float a[10];
    int i;

    printf("enter array elements ");
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }

    printf("array elements are ");
    for(i=0;i<10;i++)
    {
        printf("%.2f ",a[i]);
    }
    return 0;
}