#include <stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            int a = (i+j)+1;
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}