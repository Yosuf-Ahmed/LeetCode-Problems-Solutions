#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
      int ptr1 = 0;
      int ptr2 = 0;

      for(ptr1; ptr1 < nums.size(); ptr1++){
        if(nums[ptr1] != val){
            nums[ptr2++] = nums[ptr1];
        }
      }

      return ptr2;

}

int main(void){
    vector <int> nums {1, 2, 3, 4, 2, 3};
    int vals = removeElement(nums, 2);
    cout << "K = " << vals << endl;
    for(int i=0; i<vals; i++){
        cout << nums[i] << " ";
    }
}

