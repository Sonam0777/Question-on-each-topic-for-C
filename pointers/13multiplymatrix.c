#include <stdio.h>
int main()
{
    int m,n;
    printf("enter the no of rows and columns ");
    scanf("%d %d",&m,&n);
    int a[10][10],b[10][10],sum[10][10],i,j;
    printf("enter 1st matrix elemetns \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }

    printf("\nthe matrix is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    }
    
    printf("\nenter the elements of second matrix ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(b+i)+j);
        }
    }

    printf("\nsecond matrix is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(*(b+i)+j));
        }
        printf("\n");
    }

    printf("\nthe sum of two matrix \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(sum+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
            printf("%d\t",*(*(sum+i)+j));
        }
        printf("\n");
    }

   /*  printf("\nthe sum of two matrix \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(*(sum+i)+j));
        }
        printf("\n");
    } */
    return 0;

}