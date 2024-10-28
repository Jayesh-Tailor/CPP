#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=64;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<(char)('@'+j);
        }
        cout<<endl;
    }    
        for(int i=(n+1); i<=(2*n-1); i++){
            for(int j=1; j<=(i-n); j++){
                cout<<" ";
            }
            for(int j=1; j<=(4*n-2*i-1); j++){
                cout<<(char)('@'+j);
            }
            cout<<endl;
        }
    


    return 0;
}