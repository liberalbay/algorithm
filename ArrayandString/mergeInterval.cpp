/*
 * 给出一个区间的集合，请合并所有重叠的区间。
 * 思路:
 * 首先对 vector<vector<int>> 排序，先比较区间开始，如果相同再比较区间结束，使用默认的排序规则即可
 * 使用双指针，左边指针指向当前区间的开始
 * 使用一个变量来记录连续的范围t
 * 右指针开始往后寻找，如果后续的区间的开始值比 t 还小，说明重复了，可以归并到一起
 * 此时更新更大的结束值到 t
 * 直到区间断开，将 t 作为区间结束，存储到答案里
 * 然后移动左指针，跳过中间已经合并的区间
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for (int i = 0; i < intervals.size();) {

            int t = intervals[i][1];
            int j = i + 1;
            while (j < intervals.size() && intervals[j][0] <= t) {

                t = max(t, intervals[j][1]);
                j++;
            }
            ans.push_back({intervals[i][0], t});
            i = j;
        }
        return ans;
    }
};

int main(){

    Solution solu;
    vector<vector<int>> array = {{1,4},{4,5},{5,6},{2,10},{13,15}};
    vector<vector<int>> result = solu.merge(array);
    cout<<"The array is after merge operation: "<<(result[0])[1]<<endl;
    
    return 0;
}