#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int total=0;
    int count=0;
    int tt=240-k;
for (int i = 1; i <= n; i++)
{
    total += 5 * i;
    
    if (total<=tt)
    {
       count++;
    }
    else
    {
        break;
    }
   
}
 printf("%d",count);
}
