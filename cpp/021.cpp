// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int findAmicableSum(int num){
    int sum = 0;
    for(int i=1;i<=(num/2)+1;i++){
        if(num%i==0){
            sum += i;
        }
    }
    return sum;
}

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    int answer = 0;
     for (int i = 2; i < 10000; i++) {
        int sum1 = findAmicableSum(i);
        int sum2 = findAmicableSum(sum1);

        if (i == sum2 && i != sum1) { // Ensure they are distinct numbers
            answer += i;
        }
     }
    cout<<answer;
    return 0;
}
