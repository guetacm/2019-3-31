#include <iostream>
#include <cstdio>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n,m;
    cin>>n;
    string a;
    char a1[100];

    while(n--)
    {
         m=0;
        vector<int> a2;
            cin>>a;
            strcpy(a1,a.c_str());

            for(int i=0;i<strlen(a1);i++)
               a2.push_back(a1[i]);
       sort(a2.begin(),a2.end());
     //   for(int i=0;i<a2.size();i++)
      //     cout<<a2[i]<<" ";


       // cout<<"\n";

     for(int i=0;i<a2.size()-1;i++)
        {
            if(a2[i]!=(a2[i+1]-1))
            {
                m++;break;
            }
        }
        if(m==0)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
