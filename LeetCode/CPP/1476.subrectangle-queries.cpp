/*
 * @lc app=leetcode id=1476 lang=cpp
 *
 * [1476] Subrectangle Queries
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class SubrectangleQueries
{
    vector<vector<int>> rect;

public:
    SubrectangleQueries(vector<vector<int>> &rectangle)
    {
        rect = rectangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        for (int i = row1; i <= row2; i++)
        {
            for (int j = col1; j <= col2; j++)
            {
                rect[i][j] = newValue;
                cout << rect[i][j] << " ";
            }
            cout << "\n";
        }
    }

    int getValue(int row, int col)
    {
        return rect[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
// @lc code=end
