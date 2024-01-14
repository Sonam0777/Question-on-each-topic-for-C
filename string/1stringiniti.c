#include <stdio.h>
int main()
{
    char hlp[9] = {'N','E','W',' ','Y','O','R','K','\0'};
    /* int i = 0;
    while(hlp[i]!='\0')
    {
        printf("%c ",hlp[i]);
        i++;
    } */
    for(int i = 0;hlp[i]!=0;i++)
    {
        printf("%c ",hlp[i]);
    }
    return 0;
}