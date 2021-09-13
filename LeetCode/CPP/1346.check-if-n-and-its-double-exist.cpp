/*
 * @lc app=leetcode id=1346 lang=cpp
 *
 * [1346] Check If N and Its Double Exist
 */
#include <vector>
#include <unordered_map>
using namespace std;
// TODO: In Rust
// @lc code=start
class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        unordered_map<float, int> nums;
        for (int i = 0; i < arr.size(); i++)
        {
            if (nums[arr[i] * 2] != 0 || nums[arr[i] / 2.0])
            {
                return true;
            }
            nums[arr[i]] = 1;
        }
        return false;
    }
};
// @lc code=end