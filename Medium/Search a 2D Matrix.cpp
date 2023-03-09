// https://leetcode.com/problems/search-a-2d-matrix/
/* Approach
1. The first integer is greater than previous row last, so we think this 2D array as a 1D array, and find mid.
2. Only challenge is to figure out the row and col of mid*/
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    // O(log(n*m))
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0;
    int high = (n*m) - 1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (matrix[mid/m][mid%m] == target) 
            return true;
        if (matrix[mid/m][mid%m] < target)
            low = mid + 1;
        else 
            high = mid - 1;
    }
    return false;
    // O(n+m)
    int n = matrix.size(),
        m = matrix[0].size(),
        row = 0,
        col = m - 1;
    
    while (row < n && col > -1) {
        int current = matrix[row][col];
        if (target == current)
            return true;
        if (current > target)
            col--;
        else
            row++;
    }
    return false;
}