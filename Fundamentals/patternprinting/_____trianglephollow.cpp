#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<".";
        }
        for(int j=1; j<=i; j++){
            if(i==1||j==1||i==n||j==i){
                cout<<"* ";
            }
            else{
                cout<<". ";
            }
        }
        cout<<endl;
    }

    // for(int i=1; i<=n; i++){
        // for the very first gap
        // for(int j=1; j<=(n-i); j++){
            // cout<<" ";
        // }
        // for the first slant line 
        // for (int j=1; j<=n; j++){
            // for(int k=n; k<=1; k--){
                // cout<<"*";
            // }
            // cout<<endl;
        // }
        // for gap between the slants
        // for(int j=1; j<=n; j++){
            // if (j==1|j==n){
                // break;
            // }
            // else if(j=2){
                // 
            // }
            // int r=(j+2);
            // for(int j=2; j<=r; j++){
                // cout<<" ";
            // }
            // cout<<endl;
        // }
        // for the second slant line
        // for(int j=1; j<=n; j++){
            // for(int k=n; k<=(2*n-1); k++){
                // cout<<"*";
            // }
            // cout<<endl;
        // }
        // for(int j=1; j<=(n-i); j++){
            // cout<<"*";
            // if (j=1)
        // }
        // int j;
        // while(j>=1){
            // if(j=1){
                // cout<<
            // }
        // }


        // for(int j=1; j<=n; j++){
            // if(i==n|i==1){
                // 
            // }
        // }
        // cout<<endl;
    // }
    return 0;
}