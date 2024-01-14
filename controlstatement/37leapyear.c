#include <stdio.h>
int main()
{
    int year;
    printf("the leap year between 1900 to 2000\n");
    for(year=1900;year<=2000;year++)
    {
        if(year%400==0||(year%100!=0&&year%4==0))
        {
            printf("%d\t",year);
        }
    }
    return 0;
}