/*
 * @lc app=leetcode id=999 lang=cpp
 *
 * [999] Available Captures for Rook
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int numRookCaptures(vector<vector<char>> &board)
    {
        int p = 0;
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                if (board[i][j] == 'R')
                {
                    int lmt = -i;
                    for (int x = -1; x >= lmt; x--)
                    {
                        if (board[i + x][j] == 'B')
                            break;
                        else if (board[i + x][j] == 'p')
                        {
                            p++;
                            break;
                        }
                    }
                    lmt = 8 - i - 1;
                    for (int x = 1; x <= lmt; x++)
                    {
                        if (board[i + x][j] == 'B')
                            break;
                        else if (board[i + x][j] == 'p')
                        {
                            p++;
                            break;
                        }
                    }
                    lmt = -j;
                    for (int x = -1; x >= lmt; x--)
                    {
                        if (board[i][j + x] == 'B')
                            break;
                        else if (board[i][j + x] == 'p')
                        {
                            p++;
                            break;
                        }
                    }
                    lmt = 8 - j - 1;
                    for (int x = 1; x <= lmt; x++)
                    {
                        if (board[i][j + x] == 'B')
                            break;
                        else if (board[i][j + x] == 'p')
                        {
                            p++;
                            break;
                        }
                    }
                    break;
                }
            }
        }
        return p;
    }
};
// @lc code=end