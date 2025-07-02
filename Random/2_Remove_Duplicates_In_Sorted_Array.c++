#include <iostream>
using namespace std;

int Remove_Duplicates(int arr[], int n){
    int ptr2=1;
    for(int ptr1=1; ptr1<n; ptr1++){
        if(arr[ptr1] != arr[ptr1-1]){
            /*arr[ptr2] = arr[ptr1];
            ptr2++;*/
            arr[ptr2++] = arr[ptr1];
        }
    }
    return ptr2;
}

int main(void){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int result = Remove_Duplicates(arr, n);
    for(int i=0; i<result; i++){
        cout << arr[i] << " ";
    }
}