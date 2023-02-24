#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n=matrix[0].size();
        if(m==0)
        {
            return false;
        }
        int i =0, j=n-1;
        while(i<m && j>=0)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            else if(matrix[i][j]<target)
            {
                
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }
};

int main()
{
    

    return 0;
}