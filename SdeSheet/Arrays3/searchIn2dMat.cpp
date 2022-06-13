// Just leetcode - code driver cde required
#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    if (matrix.size() == 0)
        return false;
    // int i = matrix.size() -1, j = 0;

    // while(i >=0 && j <matrix[0].size()){
    //     if(matrix[i][j] == target){
    //         return true;
    //     }
    //     else if(matrix[i][j] > target){
    //         i--;
    //     }
    //     else{
    //         j++;
    //     }
    // }
    // return false;
    // for(int i=0;i<matrix.size();i++){
    //     for(int j =0;j<matrix[0].size();j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // return true;

    int n = matrix.size(), m = matrix[0].size();
    int low = 0;
    int high = n * m - 1;

    while (low <= high)
    {
        int mid = (low + (high - low)) / 2;
        if (matrix[mid / m][mid % m] == target)
            return true;
        else if (matrix[mid / m][mid % m] < target)
            low = mid;
        else
            high = mid;
    }
    return false;
}

int main()
{
    return 0;
}