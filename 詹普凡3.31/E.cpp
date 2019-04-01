#include<iostream>
#include<string>
#include<cstdio>
#define N 200100
using namespace std;
long long T,n,gg[N],a[N],b[N],ans[N];
string str;
int main(){
    ios::sync_with_stdio(0);//取消了流同步，仍用cin
    int i;
    cin>>n;
    cin>>str;
    for(i=1;i<=n;i++) a[i]=str[i-1]-'a';
    cin>>str;
    for(i=1;i<=n;i++) b[i]=str[i-1]-'a';
    for(i=1;i<=n;i++){
        ans[i]+=(a[i]+b[i])/2;
        if((a[i]+b[i])%2) ans[i+1]+=13;
    }
    for(i=n;i>=1;i--){
        ans[i-1]+=ans[i]/26;
        ans[i]%=26;
    }
    for(i=1;i<=n;i++)
        printf("%c",(char)(ans[i]+'a'));
    return 0;
}
//关闭流同步的cin貌似比scanf还快（c++环境下），我比赛提交用cin超时了
//后来改成了scanf去补题，还是不行；如果不进行优化，貌似关闭流同步才能过
