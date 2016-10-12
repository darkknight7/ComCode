#include<iostream>
using namespace std;
#define maxm 100005
int a[maxm];
int main(){
    int n;
    cin>>n;
    int i,j,len=0,pre_len=0;
    for(i=0;i<n;i++){
    cin>>a[i];
    }
    len=1;
    for(i=1;i<n;i++){
        if(a[i]>=a[i-1]){len++;}
        else{
            pre_len = max(len,pre_len);
            len=1;
        }
    }
    pre_len = max(len,pre_len);
    cout<<pre_len<<endl;
}
