#include<iostream>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    int ans=n;
    int days = n;
    while(days>=m){
        ans+=(days/m);
        days = (days%m) + (days/m);

    }
    cout<<ans<<endl;
}

