#include<iostream>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;

    int sum =0;
    int p=1;
    
    while(n>0){
        sum+=(n%10)*p;
        p*=2;
        n/=10;
    }
    //cout<<sum;

    int sum2=0;
    int p2=1;
    
    while(m>0){
        sum2+=(m%10)*p;
        p2*=2;
        m/=10;
    }
    //cout<<sum<<sum2<<endl;
    
    if(sum>sum2){
        cout<<sum<<endl;
    }
    else{
        cout<<sum2<<endl;
    }
    
    return 0;
}