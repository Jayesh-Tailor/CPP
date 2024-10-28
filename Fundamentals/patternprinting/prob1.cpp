#include <iostream>
using namespace std;
int main(){

    int n; 
    cin>>n;

    if(n<0){
        n=-n;
    }

    int dc =0;

    if(n==0){
        cout<<(dc=1);
    }
    else{
        while(n>0){
            n/=10;
            ++dc;
        }
    }
 
    cout<<dc;

    return 0;
}