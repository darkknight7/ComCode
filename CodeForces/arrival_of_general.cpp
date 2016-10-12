#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    int i=0;
    for(i=0;i<n;i++)cin>>a[i];

    int min=a[0];
    int min_pos=0;
    int max = a[0];
    int max_pos=0;
    for(i=1;i<n;i++){
        if(min>=a[i]){min=a[i];min_pos=i;}
        if(max<a[i]){max=a[i];max_pos=i;}
    }
    if(min_pos==max_pos)cout<<0<<endl;
    else if(min_pos>max_pos)cout<<(max_pos)+(n-1-min_pos)<<endl;
    else cout<<(max_pos)+(n-1-min_pos)-1<<endl;
}
