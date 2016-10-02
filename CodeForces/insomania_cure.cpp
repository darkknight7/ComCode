#include<iostream>
using namespace std;
#define maxm 100001
int a[maxm];
int main(){
   int k,l,m,n,d;
   cin>>k>>l>>m>>n>>d;
   int i,ans=0;
    for(i=k;i<=d;i+=k)a[i]=1;
    for(i=l;i<=d;i+=l)a[i]=1;
    for(i=m;i<=d;i+=m)a[i]=1;
    for(i=n;i<=d;i+=n)a[i]=1;
    for(i=1;i<=d;i++)if(a[i]==1)ans++;
    cout<<ans<<endl;
}
   
