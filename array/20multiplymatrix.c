#include <stdio.h>
int main()
{
    int a[3][2], b[2][3], i,j;
    printf("enter the element of first matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nenter the elements of second matrix : ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nThe first matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    int k;
    printf("\nmatrix multiplication: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int  mul = 0;
            for(k=0;k<2;k++)
            {
                mul = mul + a[i][k] * b[k][j];
                printf("%d\t",mul);
            }
        }
        printf("\n");
    }

    return 0;
}