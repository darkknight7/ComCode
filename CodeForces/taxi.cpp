#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int four,three,two,one;
    one=two=three=four=0;
    int i,temp;
    for(i=0;i<n;i++){
        cin>>temp;
        if(temp==4)four++;
        else if(temp==3)three++;
        else if(temp==2)two++;
        else one++;
    }

    int ans=four;
    ans+=three;
    one=(one-three>=0)?(one-three):0;
    ans+= (two/2);
    if(two%2!=0)one+=2;
    ans+=one/4;
    if(one%4!=0)ans++;
    cout<<ans<<endl;
}
