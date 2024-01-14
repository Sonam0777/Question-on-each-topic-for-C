#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    float root1,root2;
    float realPart, imaginaryPart;
    printf("enter value of a, b and c from quadratic equation: ");
    scanf("%f %f %f",&a,&b,&c);

    float d = (b*b)-(4*a*c);

    if(d>0)
    {
        //roots are real and different
        root1= (-b+sqrt(d))/(2*a);
        root2= (-b-sqrt(d))/(2*a);
        printf("root1 = %.2f\troot2 = %.2f",root1,root2);
    }
    
    else if(d==0)
    {
        //roots are real and equal
        root1=root2= -b/(2*a);
        printf("root1 = %.2f\troot2 = %.2f",root1,root2);
    }

    else{
        //roots are not real. they are imaginary roots
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-d)/(2*a);
        printf("root1 = %.2f+%.2fi \t root2=%.2f+%.2fi",realPart,imaginaryPart,realPart,imaginaryPart);
    }
    return 0;
}