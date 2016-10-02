#include<iostream>
#include<string>
using namespace std;
int main(){
int n;
cin>>n;
char a[n+1];
cin>>a;
int i;
char p=a[0];
for(i=1;i<n;i++){
    if(a[i]==p)a[i]='0';
    else p=a[i];
}

int ans;
for(i=0;i<n;i++)if(a[i]=='0')ans++;
cout<<ans<<endl;
}
