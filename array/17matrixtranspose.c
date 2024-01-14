#include <stdio.h>
int main()
{
    int r,c;
    printf("enter the row of matrix : ");
    scanf("%d",&r);
    printf("enter the column of matrix : ");
    scanf("%d",&c);

    int i,j,n[r][c];
    printf("enter the elements of first matrix ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }

    printf("\noriginal matrix : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }

    printf("\ntransposed matrix : \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",n[j][i]);
        }
        printf("\n");
    }

    return 0;
}