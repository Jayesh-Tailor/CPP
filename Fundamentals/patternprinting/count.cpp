#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int c=0;

    while(n>0){
        //c++;
        n/=10;
        c++;

    }

    cout<<c<<endl;

    return 0;
}