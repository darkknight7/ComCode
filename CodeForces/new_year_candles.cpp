#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;

int i=0;
int ans=a;
int left=a;
int temp;
while(left>=b){

ans+=(left/b);
temp = (left%b) + (left/b);
left=temp;
}
cout<<ans<<endl;
}
