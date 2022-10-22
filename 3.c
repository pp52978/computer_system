#include<stdio.h>
int ans[32];
int main()
{
    int n;
    scanf("%d",&n);
    int now=31;
    while(n!=0)
    {
        ans[now]=n%2;
        n=n/2;
        now--;    
    }
    for(int i=0;i<=31;i++)
    {
        printf("%d",ans[i]);
    }
    return 0;
}