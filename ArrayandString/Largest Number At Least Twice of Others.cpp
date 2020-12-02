/* 
 * In a given integer array nums, there is always exactly one largest element.
 * Find whether the largest element in the array is at least twice as much as 
 * every other number in the array.
 * If it is, return the index of the largest element, otherwise return -1.
 */
#include<iostream>
#include<vector>
using namespace std;

class Solution{

public:
    const int findLelement(const vector<int> &array){
        
        int largest = findlargest(array);
        for(int i = 0; i < array.size(); i++){

            if(array[largest] < 2*array[i] && i != largest){

                return -1;
            }
        }

        return largest;
    }

    const int findlargest(const vector<int> &array){

        int largestindex = 0;
        for(int i = 0; i < array.size(); i++){
            
            if(array[i] > array[largestindex]){

                largestindex = i;
            }
        }

        return largestindex;
    }
};

int main(){

    vector<int> array = {3,6,1,0};
    Solution solu;
    int result = solu.findLelement(array);
    cout<<"the largest element in the array is at least twice"<<endl
        <<"as much as every other number in the array is: "<<array[result]<<endl;
    return 0;
}