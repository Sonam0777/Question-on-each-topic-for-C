#include <stdio.h>
#include <string.h>
int main()
{
    int vowel=0,cons = 0, space = 0, semicolon = 0,commas=0;
    char a[100];
    printf("enter the string ");
    gets(a);

    int i;
    int len = strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            vowel++;
        }
        else{
            cons++;
        }
        if(a[i]==' ')
        {
            space++;
        }
        if(a[i]==';')
        {
            semicolon++;
        }
        if(a[i]==',')
        {
            commas++;
        }
    }
    printf("\nvowels = %d",vowel);
    printf("\nconsonant = %d",cons);
    printf("\nspace = %d",space);
    printf("\nsemicolon = %d",semicolon);
    printf("\ncommas = %d",commas);
    return 0;
}