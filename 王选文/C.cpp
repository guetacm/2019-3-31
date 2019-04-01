#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

const int maxn=2e5+7;
int a[maxn], b[maxn];

int main()
{
    int n; cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n, cmp);

    int cnt=0;
    a[n]=-99999999;
    for(int i=0; i<n; i++)
    {
        if(a[i]==a[i+1])
        {
            b[cnt++]=a[i];
            //printf("cnt=%d\n", cnt);
           // printf("a[%d]=%d",i, a[i]);
            a[i]=-99999999;
        }

    }
    sort(a, a+n, cmp);
    sort(b, b+cnt);

    int flag=0;
    for(int i=0; i<cnt-1; i++)
        if(b[i]==b[i+1]){
            //printf("b=%d\n", b[i]);
            flag=1; break;
    }

    if(flag)
        printf("No");
    else
    {
        printf("Yes\n");
        printf("%d\n",cnt);
        for(int i=0; i<cnt; i++){
            if(i)
                printf(" ");
            printf("%d", b[i]);
        }
        printf("\n");
        printf("%d\n", n-cnt);
        for(int i=0; i<n-cnt; i++)
        {
            if(i)
                printf(" ");
            printf("%d", a[i]);
        }

    }
}

