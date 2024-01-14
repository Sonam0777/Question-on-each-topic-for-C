#include <stdio.h>
int main()
{
    int i=1;
    int sum = 0;
    while(i<=100)
    {
        sum = sum+i;
        i++;
    }
    printf("sum upto 100 form 1 is %d",sum);
    return 0;
}