#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char arr[105];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        memset(arr,0,sizeof(arr));
        scanf("%s",arr);
        int m=strlen(arr);
        sort(arr,arr+m);
        char ss=arr[0];
        int mark=0;
        for(int i=1;i<m;i++)
        {
            if(ss==arr[i]||ss!=arr[i]-1)
            {
                mark=1;
                break;
            }
            ss=arr[i];
        }
        if(mark) printf("No\n");
        else printf("Yes\n");
        getchar();
    }
}