#include<iostream>
using namespace std;
int square(int n){
    int s=n*n;
    return s;
}
int main(){
    int n;
    cin>>n;

    cout<<square(n)<<endl;

    return 0;
}