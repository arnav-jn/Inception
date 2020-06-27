#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n],i,hd,final;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<n;i++)
    {
        hd=arr1[i]-arr2[i];
        if(hd<0)
        hd=hd*(-1);
        final+=hd;
    }
    printf("%d",final);

}