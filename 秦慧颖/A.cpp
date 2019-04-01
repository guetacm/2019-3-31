#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int n,k=0;
    int ton[26];
    memset(ton,0,sizeof(ton));
    cin>>n;
//    if(n>=1&&n<=100)
  //  {
    while(n--)
    {
        string a;
        int i;

       // cout<<lo;
        //a='a';
            cin>>a;
            int lo=a.length();
          //  if((a.length()>=1)&&(a.length<=100))
        //    {
            for(int j=0; j<lo; j++)
            {
                if(a[j]>'z'||a[j]<'a')
                    k=1;
                else
                {
                    i=(int)(a[j]-'a');
                    ton[i]++;
           //cout<<ton[i]<<" ";
           //cout<<i<<".";
                }
            }
      //     cout<<endl;
            for(int j=0;j<26;j++)
            {
                if(ton[j]>1)
                    k++;
                //    cout<<k;
            }
             for(int p=0;p<26;p++)
                {
                    if(ton[p]==1)
                    {
                        for(int u=0;u<lo;u++){
                            if(ton[p+u]!=1)
                            k=1;
                        }
                        goto N;
                    }
                }
         N:   if(k>0)
                cout<<"No"<<endl;
                else
                cout<<"Yes"<<endl;
            memset(ton,0,sizeof(ton));
            k=0;
        //    }
  //      }
    }
}
