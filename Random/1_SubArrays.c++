#include <iostream>
using namespace std;

void solve(int arr[], int n){
    for(int i=0; i<n; i++){    // Loop to Picks the starting element
        for(int j=0; j<n; j++){  // Loop to Picks the ending element of subArray
            for(int k=i; k<=j; k++){ // Here the sub array IS generated
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}


int main(void){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    solve(arr, n);
}