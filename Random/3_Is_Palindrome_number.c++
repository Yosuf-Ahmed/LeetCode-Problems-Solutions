#include <iostream>
using namespace std;

bool Is_Palindrome_number(int number){
    int copy = number;
    int R_number = 0;
    while (copy != 0)
    {
        R_number = copy%10 + (R_number*10);
        copy /= 10;
    }

    if (number < 0) return false;
    
    if(number == R_number){
        return true ;
    }
    else{
        return false;
    }

    // return number == R_number;
    
}

int main(void){
    int number;
    cin >> number;
    Is_Palindrome_number(number) ? cout << number <<"  Yes, Is Palindrome" << endl : cout <<number << " No, Is Not Palindrome" << endl;
    
}