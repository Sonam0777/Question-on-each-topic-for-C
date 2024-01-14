#include <stdio.h>
int i,j;
void input(int a[][10],int,int);
void original(int a[][10],int,int);
void transpose(int a[][10],int,int);
int main()
{
    int r,c;
    printf("enter row ");
    scanf("%d",&r);
    printf("enter column ");
    scanf("%d",&c);
    int a[10][10];
    input(a,r,c);
    original(a,r,c);
    transpose(a,r,c);
    return 0;
}

void input(int a[][10],int r,int c)
{
    printf("enter the elements of matrix ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void original(int a[][10],int r,int c)
{
    printf("\nBefore transpose \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}

void transpose(int a[][10],int r,int c)
{
    printf("\ntranspose matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}

