#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    printf("enter your string ");
    gets(a);

    int i,vowel = 0, conso = 0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            vowel++;
        }
        else
        {
            conso++;
        }
    }

    printf("no of vowel = %d",vowel);
    printf("\nno of consonanat =%d",conso);
    return 0;
}