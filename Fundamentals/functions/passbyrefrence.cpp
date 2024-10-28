#include <iostream>
using namespace std;
int main(){

    int p=1;
    int &q=p;
    cout<<p<<endl<<q;

    cout<<&p<<" "<<&q<<endl;
    return 0;
}