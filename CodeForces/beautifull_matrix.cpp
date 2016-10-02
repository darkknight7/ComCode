#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,m;
    int a;
    int i,j;
    int h,v;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++){
          cin>>a;
          if(a==1){h=i;v=j;}
        }

    cout<<abs(h-2)+abs(v-2)<<endl;
}
