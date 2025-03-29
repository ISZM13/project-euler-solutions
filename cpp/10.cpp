// TC = n root n
// a better method with sieve of Eratosthenes exist
#include <iostream>
#include<cmath>
using namespace std;


bool checkPrime(int num) {
    if (num < 2) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i <= sqrt(num); i += 2) { // Only check odd numbers
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    long long int sum =2;
    for(int i=1;i<2000000;i=i+2)
    {
        if(checkPrime(i))
            sum+=i;
    }
    cout<<sum;
    return 0;
}