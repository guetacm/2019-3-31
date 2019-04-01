#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a[40];
        string s;
        cin>>s;
        int len=s.length();
        memset(a,0,sizeof(a));
        for(int j=0;j<len;j++)
        {
            a[s[j]-'a']++;
        }
        bool first=1;
        bool endd=0;
        bool flag=1;
        for(int j=0;j<26;j++)
        {
            if(a[j]>0&&first==1)
            {
                first=0;
                continue;
            }
            if(first)
                continue;
            if(first==0&&a[j]==0&&endd==0)
                endd=1;
            if(endd==1&&a[j]>0)
                {
                    flag=false;
                    break;
                }
        }
        for(int j=0;j<26;j++)
            if(a[j]>1)
                flag=0;
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
