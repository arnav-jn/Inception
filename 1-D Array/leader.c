#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
     for(j=i+1;j<n;j++){
         if(arr[i]<arr[j]){
         cnt++;
         break;
         }
     }   
     if(cnt==0){
         printf("%d\t",arr[i]);
     }
     cnt=0;
    }
    printf("%d",arr[n-1]);
}