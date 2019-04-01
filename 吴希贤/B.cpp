#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[2005];
    int b[2005];
    int c[2005];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int bl=1,cl=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
            b[bl++]=a[i];
        else
            c[cl++]=a[i];
    }
    sort(b+1,b+bl);
    sort(c+1,c+cl);
    int cha=abs(bl-cl);
    cha--;
    int sum=0;
    if(cha==0||cha==-1)
        cout<<0;
    else
    {if(bl>cl)
    {
        for(int i=1;i<=cha;i++)
            sum+=b[i];
    }
    else
        for(int i=1;i<=cha;i++)
            sum+=c[i];
    cout<<sum;
    }
}