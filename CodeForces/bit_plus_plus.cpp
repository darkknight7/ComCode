#include<iostream>
using namespace std;
int main(){
int n,x=0;
cin>>n;
char a[10];
for(int i=0;i<n;i++){
    cin>>a;
    if(a[0]=='+'||a[1]=='+')x++;
    else if(a[0]=='-'||a[1]=='-')x--;
}
cout<<x<<endl;
}
