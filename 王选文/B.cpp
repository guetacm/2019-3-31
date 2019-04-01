#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int a[2005], b[2005];

int main()
{
    int n,ca=0, cb=0;
    cin>>n;
    while(n--)
    {
        int date; cin>>date;
        if(date%2)
            a[ca++]=date;
        else
            b[cb++]=date;
    }

    sort(a, a+ca);
    sort(b, b+cb);

    int ans=0;
    if(ca==cb || ca+1==cb || cb+1==ca)
        ans=0;
    else if(ca-cb>=2)
    {
        for(int i=0; i<ca-cb-1; i++)
            ans+=a[i];
    }
    else
    {
        for(int i=0; i<cb-ca-1; i++)
            ans+=b[i];
    }

    cout<<ans<<endl;
    return 0;
}
