#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums.at(i) == target){
                return i;
            }
        }
        int min = INT_MAX;
        int min_indx;
        for(int i=0; i<nums.size(); i++){
            if(abs(target-nums.at(i))<min){
                min = abs(target-nums.at(i));
                min_indx = i;
            }
        }
        if(target > nums.at(min_indx)){
            return min_indx+1;
        }
        else{
            return min_indx;
        }
}


// Enhanced solution 

int searchInsert1(vector<int>& nums, int target){
    for(int i=0; i<nums.size(); i++){
        if(nums.at(i)>=target){
            return i;
        }
    }
    return nums.size();
}




int main(void){
    vector <int> nums {1, 3, 5, 6};
    int position = searchInsert1(nums, 7);
    cout << position << endl;
}