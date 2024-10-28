#include<iostream>
using namespace std;
int main(){
    char alp;

    cin>>alp;

    if((alp=='a') || (alp=='e') || (alp=='i') || (alp=='o') ||(alp=='u')){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonent"<<endl;
    }

    return 0;
}