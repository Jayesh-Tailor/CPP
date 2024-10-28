#include<iostream>
using namespace std;
int main(){

    for(int i=100; i<=500; i++){
        int ans=0;
        int t=i;

        while(t!=0){
            int r=(t%10);
            ans+=(r*r*r);
            t/=10;
        }
        
        if(ans==i){
            cout<<ans<<endl;
        }
    }
    return 0;
}