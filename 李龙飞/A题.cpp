#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
bool pan(string a)
{

    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {

        if(a[i+1]-a[i]==0||a[i+1]-a[i]>1)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    string a[100];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
        if(pan(a[i]))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    return 0;
}
