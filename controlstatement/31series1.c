#include <stdio.h>
int main()
{
    int n,i;
    float p=0;
    printf("enter nth elments ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=p+1/(float)i;
    }
    printf("sum of series is %.2f",p);
    return 0;
}