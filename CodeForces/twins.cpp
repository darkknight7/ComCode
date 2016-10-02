#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    int sum=0;
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    int ans=0;
    int sum_ans=0;
    for(i=n-1;i>=0;i--){
        sum_ans+=a[i];
        if(sum_ans>sum-sum_ans)break;
        ans++;
    }
    ans++;
    cout<<ans<<endl;
}


