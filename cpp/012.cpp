// TC = sqrt(n).logn
#include <iostream>
#include <cmath>
using namespace std;

int noOfDivisors(int num){
    int divisors = 2;
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0)
            divisors+=2;
    }
    return divisors;
}

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    int divisors =0;
    long int num=1,increment=1;
    while(true){
        divisors = noOfDivisors(num);
        if(divisors>500)
            break;
        increment++;
        num += increment;
    }
    cout<<num;
    return 0;
}