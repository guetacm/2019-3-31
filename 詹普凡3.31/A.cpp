//A
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int a[27];

    string t;
    int n;
    cin>>n;
    while(n--){
        cin>>t;
        memset(a,0,sizeof(a));
        for(int i=0; i<t.length(); i++)
            a[t[i]-96]++;
        /*for(int i=1;i<=26;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;*/
        int k=0;
        int check=0;
        for(int i=1; i<=26; i++)
            if(a[i]>1) check=1;
        for(int i=1;i<=26;i++){
            if(a[i]>0&&k==0) k=1;
            if(a[i]>0&&k==1) continue;
            if(a[i]==0&&k==1) k=2;
            if(k==2&&a[i]>0) check=1;
        }
        if(check) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
