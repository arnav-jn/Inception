#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,l,s,cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&s,&l);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=s && arr[i]<=l)
        cnt++;
    }
    printf("%d",cnt);

}