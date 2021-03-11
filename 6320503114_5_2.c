#include<stdio.h>
int main ()
{
    int n,i,j,k,r,m,c;
    scanf("%d",&n);
    if(n%2==0)
    {
        m=n/2;
        r=n-1;
        c=m;
    }
    else
    {
        m=(n+1)/2;
        r=n;
        c=m-1;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<r;j++)
        {
            if(j==m-i-1 || j==m+i-1)
                printf("*");
            else
                printf("_");
        }
        printf("\n");
    }
    for(i=c;i>0;i--)
    {
        for(j=r;j>0;j--)
        {
            if(j==m+i-1 || j==m-i+1)
                printf("*");
            else
                printf("_");
        }
        printf("\n");
    }

}
