//B
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int a[50005];
    int b[50005];
    int c=0;
    int d=0;
    int tmp;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        if(tmp%2){
            a[c]=tmp;
            c++;
        }
        else{
            b[d]=tmp;
            d++;
        }
    }
    int sum=0;
    sort(a,a+c);
    sort(b,b+d);
    if(c>d){
        c=c-d-1;
        for(int i=0;i<c;i++){
            sum+=a[i];
        }
    }
    else{
        d=d-c-1;
        for(int i=0;i<d;i++){
            sum+=b[i];
        }
    }
    cout<<sum<<endl;
}