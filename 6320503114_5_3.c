#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=0,k=0,n,num,check,mod[3]={2,3,5};
    scanf("%d",&n);
    for(i=1;k<n;i++)
    {
        check=i;
        while(j!=3)
        {
            if(check%mod[j]==0)
                check/=mod[j];
            else
                j++;
        }
        j=0;
        if(check==1)
        {
            num=i;
            k++;
        }
    }
    printf("%d",num);

}



