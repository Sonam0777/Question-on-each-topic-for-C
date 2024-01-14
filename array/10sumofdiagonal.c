#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r,c;
    printf("enter no of rows ");
    scanf("%d",&r);
    printf("enter no of columns ");
    scanf("%d",&c);

    if(r!=c)
    {
        printf("error since it is not  a square matrix ");
        exit(0);
    }
    else
    {
        int a[r][c],i,j;
        printf("enter array elements ");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("matrix is \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }

        int diagonal1=0, diagonal2=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j)
                {
                    diagonal1=diagonal1+(a[i][j]*a[i][j]);
                }
                if(i+j==r-1)
                {
                    diagonal2=diagonal2+(a[i][j]*a[i][j]);
                }
            }
        }
        printf("the sum of first diagonal = %d",diagonal1);
        printf("\nthe sum of second diagonal = %d",diagonal2);

        int diagonal = diagonal1 + diagonal2;

        printf("\nthe total sum of diagonal in a given matrix = %d",diagonal);
    }
    return 0;
}