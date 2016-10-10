#include<iostream>
#include<string>
using namespace std;
#define ad 1000
int year[100000];
int main(){
int i=0,j,count,k;
int flag[220];
string str="1000";
int temp=1000;
for(i=0;i<9000;i++){
    str=to_string(temp);
    for(j=0;j<10;j++)flag[j]=0;
    for(j=0;j<4;j++){
        flag[(int)(str[j]-'0')]=1;
    }
    
    count=0;
    for(k=0;k<10;k++)
        if(flag[k]==1)count++;
    if(count==4)year[i]=1;
    temp++;
}


int inp;
cin>>inp;
int ans=inp;
for(i=inp+1;;i++){
if(year[i-ad]==1){ans=i;break;}
}
cout<<ans<<endl;
}
