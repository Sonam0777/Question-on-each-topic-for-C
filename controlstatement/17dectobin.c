#include <stdio.h>
int main()
{
    int decNum,rev=0,q=1,rem,i=1;
    printf("enter decimal number ");
    scanf("%d",&decNum);
    int temp=decNum;
    while(q!=0)
    {
        q=decNum/2;
        rem=decNum%2;
        decNum=q;
        rev=rev+i*rem;
        i=i*10;
    }

    printf("the binary of %d is %d",temp,rev);
    return 0;
}