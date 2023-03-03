// https://leetcode.com/problems/squares-of-a-sorted-array/
/* Approach: 
1. Array is sorted, so most -ve and most +ve are at the ends.
2. Squaring would make them +ve.
3. So using two pointer, from start and end, compare them and keep placing them from the end */
vector<int> sortedSquares(vector<int>& nums) {
    vector<int> ans(nums.size());
    int i = 0, j = nums.size() - 1;
    int k = j;
    while (k >= 0) {
        int front = nums[i]*nums[i];
        int back = nums[j]*nums[j];
        if (back > front) {
            ans[k--] = back;
            j--;
        }
        else {
            ans[k--] = front;
            i++;
        }
    }
    return ans;
}