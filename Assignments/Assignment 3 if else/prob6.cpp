#include<iostream>
using namespace std;
int main(){
    int marks;
    
    cout<<"Enter your marks ";
    cin>>marks;

    if(marks>90){
        cout<<"Your grade is A+"<<endl;
    }
    else if(marks>80){
        if(marks<90){
            cout<<"Your grade is A"<<endl;
        }
    }
    else if (marks>70){
        if(marks<80){
            cout<<"Your grade is B+"<<endl;
        }
    }
    else if (marks>60){
        if(marks<70){
            cout<<"Your grade is B"<<endl;
        }
    }
    else if(marks>50){
        if(marks<60){
            cout<<"Your grade is C"<<endl;
        }
    }
    else if(marks>40){
        if(marks<50){
            cout<<"Your grade is D"<<endl;
        }
    }
    else if(marks>30){
        if(marks<40){
            cout<<"Your grade is E"<<endl;
        }
    }
    else{
        cout<<"Your grade is F"<<endl;
    }
    
    return 0;

}