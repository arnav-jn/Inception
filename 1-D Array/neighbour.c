#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,great;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(i!=(n-1) && arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            great=arr[i];
            printf("%d",great);
        }
    }


}