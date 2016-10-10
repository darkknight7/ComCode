#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    int i=0;
    int t;
    for(i=0;i<n;i++){cin>>t;
    a[t-1]=i+1;
    }

    for(i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
}
