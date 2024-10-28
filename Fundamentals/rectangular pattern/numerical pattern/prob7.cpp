#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int j;

        // for first gap
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        // for numbers
        if(j==1){       // correction
            cout<<"1";
        }
        else {
            for( int j=2; j<=n; j++){
                cout<<j;
            }
        }
        // int j;
            // if(j==1){
                // cout<<j;
            // }
        // for(int j=2; j<=n; j++){
            // cout<<j;
        // }
        // for second gap
        if( j==1| j==2){
        for(int j=1 ; j<=(i-1); j++){
            cout<<" ";
        }
        }

        else if(j==3){
            for(int j=1; j<=i; j++){
                cout<<" ";
            }
        }

        else{
            for(int j=(i+1); j<=(i+n-3); j++){
                cout<<" ";
            }
        }
        cout<<endl;
        
    }

    // for(int i=1; i<=n; i++){
        // for(int j=1;j<=(n-i); j++){
            // cout<<" ";
        // }
        // for(int j=1; j<=(2*i-1);j++){
            // cout<<i;
        // }
        // for(int j=1; j<=(j+2); j++){
            // cout<<" ";
        // }
        // cout<<endl;
    // }

    return 0;
}