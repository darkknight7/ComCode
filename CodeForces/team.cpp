#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b+c>1)ans++;
    }
    cout<<ans<<endl;
}
