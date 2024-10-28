#include <iostream>
using namespace std;
int main(){

    int n=5;
    //cin>>n;

    for(int i=1; i<=n; i++){
        for (int j=0; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=0; j<=(2*i-1); j++){
            //char c=(char)('A'+j);
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }

    for(int i=(n+1); i<=(n+4); i++){
        for(int j=0; j<=(i-n); j++){
            cout<<" ";
        }
        for(int j=0; j<=(4*n-2*i-1); j++){
            //char d=(char)('A'+j);
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }
    return 0;
}