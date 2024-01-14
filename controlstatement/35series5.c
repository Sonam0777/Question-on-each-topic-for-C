#include <stdio.h>
#include <math.h>

int main()
{
    float sum = 0.0;
    int i,a,n;
    printf("eneter the value of a ");
    scanf("%d",&a);

    printf("enter nth term ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum= sum - pow(a,i)/i;
        }
        else
        {
            sum = sum + pow(a,i)/i;
        }
    }
    printf("sum = %.2f",sum);
    return 0;
}