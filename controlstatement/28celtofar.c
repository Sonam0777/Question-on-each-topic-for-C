#include <stdio.h>
int main()
{
    int cel;
    float f;
    for(cel=0;cel<=25;cel++)
    {
        f=(float)cel*9/5+32;
        printf("%d deg = %.2f far\n",cel,f);
    }
    return 0;
}