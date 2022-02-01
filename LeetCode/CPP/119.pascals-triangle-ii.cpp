/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<vector<int>> arr;
        arr.push_back({1});
        arr.push_back({1, 1});

        for (int i = 2; i <= rowIndex; i++)
        {
            vector<int> row;
            row.push_back(1);

            for (int j = 1; j < i; j++)
            {
                row.push_back(arr[1][j - 1] + arr[1][j]);
            }

            row.push_back(1);
            arr.pop_back();
            arr.push_back(row);
        }
        return arr[rowIndex < 2 ? rowIndex : 1];
    }
};
// @lc code=end

