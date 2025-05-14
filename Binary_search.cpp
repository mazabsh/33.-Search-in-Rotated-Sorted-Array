#include<iostream> 
#include<vector> 

using namespace std; 

class Solution{
public: 
      int search(vector<int>& nums, int target){
        int left =0; 
        int right = nums.size(); 
        while(left<=right){
          int mid = left + (right-left)/2; 
          if(nums[mid]==target) return mid; 
          if(nums[left]<nums[mid]){   // left is sorted
            if(target >=nums[left] && target <nums[mid]) right = mid-1; 
            else left = mid +1; 
          }else {
            if(target> nums[mid] && target <= nums[right]) left = mid+1; 
            else right = mid-1; 
          }
        }
        return -1; 
      }
};
int main(){
  int target =0; 
  vector<int> nums = {4,5,6,7,0,1,2}; 
  Solution sol; 
  cout << sol.search(nums, target) << endl; 
  return 0; 
}
