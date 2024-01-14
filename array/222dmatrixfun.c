#include <stdio.h>
#define M 3
#define N 4

void input(int a[][4]);
void input2(int b[][4]);
int add(int a[][4],int b[][4]);
int main()
{
    int a[M][N],b[M][N];
    printf("enter the elements 1st matrix : ");
    input(a);
    printf("enter the elements of 2nd matrix : ");
    input(b);
    printf("\n the sum of matrix \n");
    add(a,b);
    return 0;
}

void input(int a[][4])
{
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void input2(int b[][4])
{
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
}

int add(int a[][4],int b[][4])
{
    int sum;
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            sum=a[i][j]+b[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }
    return sum;
}