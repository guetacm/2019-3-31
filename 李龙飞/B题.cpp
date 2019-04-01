#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    int n;
    vector<int> a;
    vector<int> b;
    cin>>n;
    int x;

    while(n--)
    {
      cin>>x;
      if(x%2==0)
            a.push_back(x);
      else
        b.push_back(x);

    }
    if(a.size()>b.size())
    {

        int y=a.size()-b.size()-1;
        sort(a.begin(),a.end());
        long long sum=0;
        for(int i=0;i<y;i++)
            sum+=a[i];
            cout<<sum<<endl;
    }
    else
        if(a.size()<b.size())
    {

         int y=b.size()-a.size()-1;
        sort(b.begin(),b.end());
        long long sum=0;
        for(int i=0;i<y;i++)
            sum+=b[i];
            cout<<sum<<endl;
    }
    else
        cout<<0<<endl;
    return 0;
}
