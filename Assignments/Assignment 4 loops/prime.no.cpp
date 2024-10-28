#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int limit;
    std::cout << "Enter the limit up to which to print prime numbers: ";
    std::cin >> limit;

    std::cout << "Prime numbers up to " << limit << " are: ";
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i))
            std::cout << i <<std::endl;
    }

    //std::cout << std::endl;
    return 0;
}