#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int ans=0;
    int p=1;

    while(n>0){
        //n/=2;
        ans+=(n%2)*p;
        p*=10;
        n/=2;
    }

    cout<<ans<<endl;

    return 0;
}