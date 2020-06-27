#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n],i,j,cnt=0;
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
        for(j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            cnt++;
        }
        if(cnt==0){
            printf("%d\t",arr1[i]);
        }
        cnt=0;
    }

}