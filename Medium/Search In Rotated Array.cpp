// https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n - 1;
        while (start <= end) {
            int mid = (start+end)/2;
            if (nums[mid] == target) return mid;
            // left side is sorted
            if (nums[mid] > nums[end]) {
                if (nums[mid] > target && nums[start] <= target) 
                    end = mid-1;
                else 
                    start = mid+1;
            }
            // right side is sorted
            else if (nums[mid] < nums[start]) {
                if (nums[mid] < target && nums[end] >= target)    
                    start = mid+1;
                else
                    end = mid-1;
            }
            else {
                if (nums[mid] < target) 
                    start = mid+1;
                else 
                    end = mid-1;
            }
        }
        return -1;
    }
};
