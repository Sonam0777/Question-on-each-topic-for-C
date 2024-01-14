#include <stdio.h>
void sum(int,int,int,int);
void diff(int,int,int,int);
void mul(int,int,int,int);
void div(int,int,int,int);
int main()
{
    int a,b,c,d;
    printf("enter real and imaginary part of first complex number ");
    scanf("%d %d",&a,&b);
    printf("enter real and imaginary part of second complex number ");
    scanf("%d %d",&c,&d);
    /* printf("enter third complex number ");
    scanf("%d+i%d",&a,&b); */
    sum(a,b,c,d);
    diff(a,b,c,d);
    mul(a,b,c,d);
    div(a,b,c,d);
    return 0;
}

void sum(int a,int b,int c,int d)
{
    int sum1 = a+c;
    int sum2 = b+d;
    printf("the sum of two complex number is %d+i%d",sum1,sum2);
}

void diff(int a, int b, int c, int d)
{
    int diff1 = a - c;
    int diff2 = b - d;
    printf("\nthe difference of two complex number is %d+i%d",diff1,diff2);
}

void mul(int a,int b,int c,int d)
{
    int mul1 = (a*c)-(b*d);
    int mul2 = (a*d)+(b*c);
    printf("\nthe product of two complex number is %d+i%d",mul1,mul2);
}

void div(int a, int b, int c, int d)
{
    int div1 = (c*c)+(d*d);
    int div2 = (a*c)+(b*d);
    int div3 = -(a*d)+(b*c);
    float div4 = div2 / (float)div1;
    float div5 = div3 / (float)div1;
    printf("\nthe division of two complex numbe is %.2f+i%.2f",div4,div5);

}