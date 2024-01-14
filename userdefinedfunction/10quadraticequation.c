#include <stdio.h>
#include <math.h>
void roots(int, int, int);
int main()
{
    int a,b,c;
    printf("enter the value of a,b and c in quadratic equation ");
    scanf("%d %d %d",&a,&b,&c);
    roots(a,b,c);
    return 0;
}

void roots(int a,int b,int c)
{
    int d = (b*b) - (4*c*a);
    float root1,root2;
    float realPart, imaginaryPart;
    if(d>0)
    {
        //roots are real and different
        root1 = (-b+sqrt(d))/(2*a);
        root2 = (-b-sqrt(d))/(2*a);
        printf("root1 = %.2f \n root2 = %.2f",root1,root2);
    }   
    else if(d==0)
    {
        //roots are real and equal
        root1=root2=-b/(2*a);
        printf("root1 = %.2f \nroot2 = %.2f",root1,root2);
    }
    else
    {
        //roots are imaginary
        realPart =-b / (2*a);
        imaginaryPart = sqrt(-d)/(2*a);
        printf("root1 = %.2f+i%.2f \n root2 = %.2f-i%.2f",realPart,imaginaryPart,realPart,imaginaryPart);
    }
}