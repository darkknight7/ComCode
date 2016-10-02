#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.size();
    int flag=0;
    int i;
    for(i=1;i<n;i++){
    if(str[i]>='a')flag=1;
    }

    if(flag==0)
    {for(i=0;i<n;i++)
            if(i==0 && str[i]>='a')str[i]-=32;
            else if(i==0)str[i]+=32;
            else if(i!=0&&str[i]<'a')str[i]+=32;
    }
            
    cout<<str<<endl;
}


