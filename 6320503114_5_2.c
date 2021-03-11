#include<stdio.h>
int main ()
{
    int n,i,j,k,r;
    scanf("%d",&n);
    if(n%2==0)
    {
        r=n-1;
    }
    else
    {
        r=n;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<r/2;j++)
        {
            printf("_");
        }
        printf("\n");
    }
}
