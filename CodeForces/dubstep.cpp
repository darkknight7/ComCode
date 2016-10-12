#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string ans="";
    cin>>str;
    int n=str.size();
    int i=0;
    if(i+2<n && str[i]=='W' && str[i+1]=='U' && str[i+2]=='B' ){while(i+2<n && str[i]=='W' && str[i+1]=='U' && str[i+2]=='B' )  {i=i+3;}}
 
    for(;i<n;i++){
        if(i+2<n && str[i]=='W' && str[i+1]=='U' && str[i+2]=='B' ){while(i+2<n && str[i]=='W' && str[i+1]=='U' && str[i+2]=='B' )  {i=i+2;}ans+=" ";continue;}
        ans+=str[i];
    }
int s=ans.size();   if(ans[s-1]==' ') ans.pop_back();
    cout<<ans<<endl;
}
