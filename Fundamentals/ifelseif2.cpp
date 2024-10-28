#include<iostream>
using namespace std;
int main(){
    int age ;

    cin>>age;
    
    if (age<=12){
        cout<<"Child"<<endl;
    }
    else if (age>18){
        cout<<"Adult"<<endl;
    }
    else if((age>18)&&(age>60)){
        cout<<"senier citizenship"<<endl;
    }
    else{
        cout<<"Teenager"<<endl;
    }

    return 0;
}