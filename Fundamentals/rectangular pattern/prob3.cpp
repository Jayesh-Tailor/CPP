#include<iostream>
using namespace std;
int main(){

    int height, width;
    cin>>height>>width;

    for(int i=1; i<=height; i++){
        for(int j=1; j<=width; j++){
            if((i+j)%2!=0){
                cout<<".";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}