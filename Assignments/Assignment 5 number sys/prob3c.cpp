#include<iostream>
using namespace std;

int btd(int n){

    int sum=0;
    int p =1;

    while(n>0){
        sum+=(n%10)*p;
        p*=2;
        n/=10;
    }

    return sum;
}

int main(){

    int a,b;
    cin>>a>>b;

    if(btd(a)>btd(b)){
        cout<<btd(a)<<endl;
    }
    else{
        cout<<btd(b)<<endl;
    }

    return 0;

}