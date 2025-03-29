#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(int num) {
    string stri = to_string(num);
    int len = stri.length();
    for (int i = 0; i < len / 2; i++) {  
        if (stri[i] != stri[len - 1 - i])
            return false;
    }
    return true;
}

int main() {
    long int pal = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int product = i * j;
            if (product < pal) break; 

            if (checkPalindrome(product)) {
                pal = max(pal, product);
            }
        }
    }
    
    cout << "Largest palindrome: " << pal;
    return 0;
}
