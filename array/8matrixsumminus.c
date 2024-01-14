#include <stdio.h>
int main()
{
    int r,c;
    printf("enter the no of row ");
    scanf("%d",&r);
    printf("enter the no of column ");
    scanf("%d",&c);

    int i,j,a[r][c],b[r][c];

    printf("enter the element of 1st matrixx ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("1st matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("enter the element of 2nd matrixx ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("2nd matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    int sum[r][c],diff[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            diff[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("the sum of matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    printf("the difference of matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}