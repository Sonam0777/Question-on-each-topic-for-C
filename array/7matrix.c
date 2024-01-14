#include <stdio.h>
int main()
{
    int r,c;
    printf("enter the row: ");
    scanf("%d",&r);
    printf("enter the column ");
    scanf("%d",&c);

    int i,j,a[r][c];

    printf("enter the elements of matrix ");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

    printf("the matrix is : \n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    return 0;
}