#include <stdio.h>
int main()
{
    int r,c;
    printf("enter the no of rows ");
    scanf("%d",&r);
    printf("enter the no of column ");
    scanf("%d",&c);

    int a[r][c],i,j,b[r][c];
    printf("enter the matrix elements ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("before transpose \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    ///algorithm for transposing the matrix

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    printf("after transpose \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}