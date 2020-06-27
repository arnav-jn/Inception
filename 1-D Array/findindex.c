#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        break;
    }
    printf("%d",i);

}