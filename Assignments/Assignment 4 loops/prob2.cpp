#include <iostream>
using namespace std;
int main(){

    for(int i=100; i<=500; i++){
        int sum=0; 
        int t =i;

        while (t!=0){
            sum+=((t%10)*(t%10)*(t%10));
            t/=10;
        }

        if(sum==i){
            cout<<sum<<endl;
        }
    }

    return 0;
}