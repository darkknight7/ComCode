#include<iostream>
using namespace std;
int main(){
int n;
int a,b,ans=0,present=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a>>b;
    present=present-a+b;
    ans=max(ans,present);
}
cout<<ans<<endl;

}
