#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){

    int m,n;
    cin>>n>>m;
    int a[m+1];
    int diff=INT_MAX;

    int i=0;
    for(i=0;i<m;i++)cin>>a[i];
    sort(a,a+m);
    for(i=0;i<m-n+1;i++){
        diff=min(abs(a[i+n-1]-a[i]),diff);
    }

    cout<<diff<<endl;
}

