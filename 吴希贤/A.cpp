#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a;
    int n;
    cin>>n;
    while(n--)
    {
        int b[105]={0};
        cin>>a;
        int minn=1000;
        for(int i=0;i<a.size();i++)
        {
            if(minn>a[i])
                minn=a[i];
        }
        cout<<"min is  "<<minn<<endl;
        int k;
        for(int i=0;i<a.size();i++)
        {
            k=a[i]-minn;
            b[k]++;
        }
        int flag=1;
        for(int i=0;i<a.size();i++)
        {
            if(b[i]!=1)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}