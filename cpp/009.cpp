// TC = n root n 
#include <iostream>
using namespace std;

bool checkTriplet(int a, int b, int c){
    if(a<b && b<c)
        return (a*a + b*b == c*c);
    return false;
}

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    int sum = 1000;
    int a =1;
    for(int i=a;i<sum/3;i++){
        for(int j=i+1;j<sum/2;j++){
            if(checkTriplet(i,j,sum-j-i))
                cout<<i<<","<<j<<","<<(sum-i-j)<<","<<i*j*(sum-i-j);
        }
    }
    return 0;
}