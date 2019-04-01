#include <bits/stdc++.h>

using namespace std;

int arr[2005],brr[2005];
int main()
{
    int n,t;
    scanf("%d",&n);
    int a1=0,a2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t%2) arr[a1++]=t;
        else brr[a2++]=t;
    }
    if((a1==a2)||(a1==a2+1)||(a2==a1+1)) printf("0\n");
    else
    {
        if(a1>a2)
        {
            sort(arr,arr+a1);
            int co=a1-a2-1;
            long long sum=0;
            for(int i=0;i<co;i++)
            {
                sum+=arr[i];
            }
            printf("%I64d",sum);
        }
        else
        {
            sort(brr,brr+a2);
            int co=a2-a1-1;
            long long sum=0;
            for(int i=0;i<co;i++)
            {
                sum+=brr[i];
            }
            printf("%I64d",sum);
        }
    }
    return 0;
}