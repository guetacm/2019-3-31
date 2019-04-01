#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int T; cin>>T;
    char a[107];
    while(T--)
    {
        string str; cin>>str;
        int n=str.size();

        for(int i=0; i<n; i++)
            a[i]=str[i];

        sort(a, a+n);
        int flag=true;
        for(int i=0; i<n-1; i++)
            if(a[i]!=a[i+1]-1)
            {
                flag=false;
                break;
            }

        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

