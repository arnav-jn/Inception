 #include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,mean,sum=0,cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>mean)
        cnt++;
    }
    printf("%d",cnt);

}