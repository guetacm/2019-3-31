#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int len;
    cin>>len;
    char a[105],b[105];
    cin>>a>>b;
    int cha=0;
    for(int i=0;i<len;i++)
    {
        cha*=26;
        cha=cha+b[i]-a[i];
    }
    cha/=2;
    for(int i=len-1;i>=0;i--)
    {
        a[i]+=(cha%26);
        cha/=26;
        if(cha==0)
            break;
    }
    for(int i=len-1;i>0;i--)
    {
        if(a[i]>'z')
        {
            a[i-1]++;
            a[i]=a[i]-'z'+'a'-1;
        }
    }
    for(int i=0;i<len;i++)
        cout<<a[i];
}