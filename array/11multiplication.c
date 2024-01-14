#include <stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter the row of first matrix ");
    scanf("%d",&r1);
    printf("enter the column of first matrix ");
    scanf("%d",&c1);
    printf("enter the row of second matrix ");
    scanf("%d",&r2);
    printf("enter the column of second matrix ");
    scanf("%d",&c2);

    if(c1==r2)
    {
        int i,j,k,a[r1][c1],b[r2][c2];
        printf("enter the first matrix elements ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        
        printf("enter the elements of second matrix ");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        int p[r1][c2];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                p[i][j] = 0;
                for(k=0;k<c1;k++)
                {
                p[i][j] = p[i][j]+a[i][k]*b[k][j];
                }
            }
        }

        printf("matrix after multiplication \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",p[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("multiplication not possible");
    }
    return 0;
}