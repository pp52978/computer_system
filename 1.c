#include<stdio.h>
int main()
{
    char str[120];
    gets(str);
    int k=0;
    while(str[k]!=0)
    {
        if(str[k]!=' ')
        printf("%c",str[k]);
        k++;
    }
    return 0;
}