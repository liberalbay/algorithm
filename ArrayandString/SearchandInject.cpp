/*
 * Given a sorted array of distinct integers and a target value, 
 * return the index if the target is found. 
 * If not, return the index where it would be if it were inserted in order.
*/

#include<iostream>
#include<vector>
using namespace std;

class Soultion{

 public:
    const int searchInsert(vector<int>& nums, int target) {

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] == target){

                return i;
            }
            if(nums[i] > target){

                return i;
            }
            if(i == nums.size() - 1 && nums[i] < target){

                return i + 1;
            }
        }

    }
};


int main(){

    Soultion solu;
    vector<int> array = {1,2,3,5};
    int result = solu.searchInsert(array,4);
    cout<<"the target index is: "<<result<<endl;
}

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1, ans = n;
        while (left <= right) {
            int mid = ((right - left) >> 1) + left;
            if (target <= nums[mid]) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};