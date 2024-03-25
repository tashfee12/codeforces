#include<stdio.h>
int main()
{
    int n,i,a,b,c,ans=0,count=0;
    scanf("%d",&n);
   // for(i=n; i<=n; i--)
   while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==1)
            count++;
        if(b==1)
            count++;
        if(c==1)
            count++;

        if(count>=2)
            ans ++;
            count=0;

    }
    printf("%d",ans);
    return 0;
}
