#include <stdio.h>
int main()
{
    int i,j,pro;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {   
            pro=i*j;
            printf("%d\t",pro);
        }
        printf("\n");
    }
    return 0;
}