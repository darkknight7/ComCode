#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int i=0;
    int one,two,three,a,b,c;
    one=two=three=0;

    for(i=0;i<n;i++){

        cin>>a>>b>>c;

        one=one-a;
        two-=b;
        three-=c;
    }

    if(one==0 && two==0 && three==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
