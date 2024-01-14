#include <stdio.h>

int fact(int n);

int main()
{
    long f1=1,f2=1,f3=1,comb;
    int n,r;

    printf("enter the value of n and r");
    scanf("%d %d",&n, &r);

    f1=fact(n);
    f2=fact(n-r);
    f3=fact(r);

    comb=f1/(f2*f3);
    printf("the combination is %ld",comb);

    return 0;
}

int fact(int n)
{
    int i;
    long factorial = 1;
    for(i=1;i<=n;i++)
    {
        factorial *= i;
        
    }
    return factorial;
}