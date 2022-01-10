// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem36.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            bool row[10] = {};
            bool col[10] = {};

            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {

                    if (row[board[i][j] - '0'])
                    {
                        return false;
                    }
                    row[board[i][j] - '0'] = true;
                }

                if (board[j][i] != '.')
                {
                    if (col[board[j][i] - '0'])
                    {
                        return false;
                    }
                    col[board[j][i] - '0'] = true;
                }
                if (i % 3 == 0 and j % 3 == 0)
                {
                    bool box[10] = {};
                    for (int k = i; k < i + 3; k++)
                    {
                        for (int l = j; l < j + 3; l++)
                        {
                            if (board[k][l] == '.')
                            {
                                continue;
                            }
                            if (box[board[k][l] - '0'])
                            {
                                return false;
                            }
                            box[board[k][l] - '0'] = true;
                        }
                    }
                }
            }
        }
        return true;
    }
};
// @lc code=end
/*
[
[".",".","4",".",".",".","6","3","."],
[".",".",".",".",".",".",".",".","."],
["5",".",".",".",".",".",".","9","."],
[".",".",".","5","6",".",".",".","."],
["4",".","3",".",".",".",".",".","1"],
[".",".",".","7",".",".",".",".","."],
[".",".",".","5",".",".",".",".","."],
[".",".",".",".",".",".",".",".","."],
[".",".",".",".",".",".",".",".","."]]
*/