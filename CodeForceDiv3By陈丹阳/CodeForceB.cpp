#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[2007],b[2007];
    int aa=0,bb=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x&1)
            a[aa++]=x;
        else
            b[bb++]=x;
    }
    sort(a,a+aa);
    sort(b,b+bb);
    if(abs(aa-bb)==1)
    {
        cout<<'0'<<endl;
        return 0;
    }
    else
    {
        if(aa>bb)
        {
            long long sum=0;
            for(int i=0;i<aa-bb-1;i++)
                sum+=a[i];
            cout<<sum<<endl;
        }
        else
        {
            long long sum=0;
            for(int i=0;i<bb-aa-1;i++)
                sum+=b[i];
            cout<<sum<<endl;
        }
    }
    return 0;
}
