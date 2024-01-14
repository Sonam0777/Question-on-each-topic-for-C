#include <stdio.h>
int main()
{
    int x=1;
    loop:
        printf("%d ",x);
        x++;
        if(x<=10)
        goto loop;
    return 0;
}
