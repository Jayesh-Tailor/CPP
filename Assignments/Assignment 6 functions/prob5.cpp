#include <iostream>
using namespace std;
bool prime(int n) {
  
    // If the number is less than or equal to 1, it is not
    // prime
    if (n <= 1) {
        return false;
    }

    // Check for divisors from 2 to n-1
    for (int i = 2; i < n; i++) {
      
        // If n is divisible by any number in this range, it
        // is not prime
        if (n % i == 0) {
            return false;
        }
    }

    // If no divisors are found, it is prime
    return true;
}

int main() {
    int a,b ;
    cin>>a>>b;

    for(int i=a; i<=b; i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }

    cout<<endl;
}