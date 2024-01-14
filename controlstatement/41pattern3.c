#include <stdio.h>
int main()
{
    int i,j,sum;
    for(i=0;i<5;i++)
    {
        for(j=1;j<=5;j++)
        {
            sum=(i+j)*5;
            printf("%d\t",sum);
        }
        printf("\n");
    }
    return 0;
}