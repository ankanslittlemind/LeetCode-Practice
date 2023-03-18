// https://leetcode.com/problems/majority-element/
int majorityElement(vector<int>& nums) {
    // Moore's Voting Algo
    int count = 0, candidate = 0;
    for (auto x : nums) {
        if (count == 0) candidate = x;
        if (x == candidate) count++;
        else count--;
    }
    return candidate;
    /*
    sort(nums.begin(), nums.end());
    unordered_map<int, int> freq;
    for (auto i : nums) freq[i]++;
    int i = 0;
    while (i < nums.size()) {
        if (freq[nums[i]] > nums.size() / 2)
            return nums[i];
        i++;
    }
    return 0;
    */
}