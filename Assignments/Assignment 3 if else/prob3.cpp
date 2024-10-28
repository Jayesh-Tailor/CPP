#include<iostream>
using namespace std;
int main(){
    int cp,sp;

    cout<<"Enter cost price ";
    cin>>cp;

    cout<<"Enter selling price ";
    cin>>sp;
    
    if(sp>cp){
        cout<<"profit is "<<(sp-cp)<<endl;
    }
    else{
        cout<<"loss is "<<(cp-sp)<<endl;
    }

    return 0;
}