/* 
 * Given an array of integers nums, 
 * write a method that returns the "pivot" index of this array.
 * We define the pivot index as the index where the sum of all 
 * the numbers to the left of the index is equal to the sum of 
 * all the numbers to the right of the index.
 * If no such index exists, we should return -1. If there are 
 * multiple pivot indexes, you should return the left-most pivot index.
 */

#include<iostream>
#include<vector>

using namespace std;

class Solution{

public:
    const int pivotIndex(const vector<int> &nums){

        int sumvalue = calsum(nums);
        int leftsum = 0;

        for(int i = 0; i<nums.size(); i++){

            if(leftsum  == sumvalue - nums[i] - leftsum){

                return i;
            }
            leftsum = leftsum + nums[i];
        }

        return -1;
    }

    const int calsum(const vector<int> nums){

        int sumvalue = 0;
        for(auto it = nums.begin();it != nums.end();it++){

            sumvalue = sumvalue + *it;
        }

        return sumvalue;
    }
};

int main(){

    vector<int> testarray = {1,2,3};
    Solution solu;
    int result = solu.pivotIndex(testarray);
    cout<<"the pivot index is: "<<result<<endl;

    return 0;
}