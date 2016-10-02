#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,t,i;
    cin>>n>>t;
    string str;
    cin>>str;
    string temp="";
    while(t--){
    for( i=0;i<n-1;i++){
        if(str[i]=='B'&&str[i+1]=='G')temp+="GB",i++;
        else temp+=str[i];
    }
    if(i!=n)temp+=str[n-1];
    str=temp;
    temp="";
    }
    cout<<str<<endl;
}
