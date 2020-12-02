/*
 * Given a non-empty array of digits representing a non-negative integer,
 * increment one to the integer.The digits are stored such that the most significant 
 * digit is at the head of the list, and each element in the array contains a single digit.
 * You may assume the integer does not contain any leading zero, except the number 0 itself.
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution{

public:
    vector<int> plusOne(vector<int>& array) {

        int lastindex = array.size() - 1;
        vector<int> result = array;
        if(result[lastindex] != 9){

            result[lastindex] = result[lastindex] + 1;
            return result;
        }
        else{

            result[lastindex] = 0;
            for(int i = lastindex - 1; i >= 0; i--){

                if(result[i] == 9){

                    result[i] = 0;
                }else{

                    result[i] = result[i] + 1;
                    return result;
                }
            }
            result.push_back(1);
            result[0] = 1;
            result[result.size()-1] = 0;
            return result;
        }
    }
};

int main(){

    vector<int> array = {9,9,9,9,9,9,9,9};
    Solution solu;
    vector<int> result = solu.plusOne(array);
    cout<<"The array after plus one have become: ";
    for(auto it = result.begin(); it != result.end(); it++){

        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}