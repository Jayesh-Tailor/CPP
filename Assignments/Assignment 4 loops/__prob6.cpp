#include <iostream>
using namespace std;
int main(){

    int n=5;
    //int n=97;
    //cin>>n;

   // for(int i=0; i<=n; i++){
   //     for(int j=0; j<=(n-i); j++){
   //         cout<<" ";
   //     }
   //     for(int j=0; j<=(2*i-1);j++){
   //         cout<<(char)('A'+j);
   //     }
   //     cout<<endl;
   // }

   for(int i=1; i<=n; i++){
        //int c =2*i-1;
        for(int j=0; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=0; j<=(2*i-1); j++){
            char c=(char)('A'+j);
            cout<<c;
        }
        cout<<endl;
    }

    for (int i=(n+1); i<=(2*n-i); i++){
        for ( int j=0; j<=(i-n); j++){
            cout<<" ";
        }
        for(int j=0 ; j<=(2*(2*n-i)-1); j++){
            char c=(char)('A'+ j);
            cout<<c;
        }
        cout<<"\n";
    }
    return 0;
}