#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


vector<int> plusOne(vector<int>& digits) {
    
       for(int i=digits.size(); i>=0; i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
       }
       digits.insert(digits.begin(), 1);
       return digits;
}

int main(void){
    vector <int> digits {9};   // 1 2 4
    plusOne(digits);
    for(int i=0; i<digits.size(); i++){
        cout << digits[i] << " ";
    }
}




















/*

 long long number = 0;
        for(int i=0; i<digits.size(); i++){
            number = digits[i] + (number*10);
        }

        number++;
        
        vector <int> New_digits;
        while(number != 0){
            New_digits.push_back(number % 10);
            number /= 10;
        }
        
        reverse(New_digits.begin(), New_digits.end());
        
        digits = New_digits;
        return digits;

*/