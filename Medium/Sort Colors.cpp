// https://leetcode.com/problems/sort-colors/
// Dutch Flag Algorithm - 3 Pointer
void sortColors(vector<int>& nums) {
    int left = 0, 
        mid = 0,
        right = nums.size() - 1;
    while (mid <= right) {
        if (nums[mid] == 0) {
            swap(nums[left++], nums[mid++]);
        }
        else if (nums[mid] == 2) {
            swap(nums[right--], nums[mid]);
        }
        else {
            mid++;
        }
    }
    /*
    int zero = 0,
        one = 0,
        two = 0;
    for (auto x : nums) {
        if (x == 1) one++;
        else if (x == 2) two++;
        else zero++;
    }
    int k = 0;
    while (zero--) nums[k++] = 0;
    while (one--) nums[k++] = 1;
    while (two--) nums[k++] = 2;
    */
}