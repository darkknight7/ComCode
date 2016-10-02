#include<iostream>
using namespace std;
int main(){
int n,k,t,p;
cin>>n>>k;
int ans=0;
p=0;
for(int i=0;i<n;i++){
    cin>>t;
    if(i>=k&&t>0&&p>0&&t==p)ans++;
    else if(t>0&&i<k)ans++;
    if(i==k-1)p=t;
}
cout<<ans<<endl;

}
