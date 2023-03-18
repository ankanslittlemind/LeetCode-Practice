// https://leetcode.com/problems/longest-subsequence-with-limited-sum/

/* Approach
Sort nums.
Update nums with its prefix sum.
Treating each element of queries as independent problem, find the sum in nums.
nums is already sorted, so we can apply binary search in it.
Since we want to the maximum length of subsequence, we can use upper_bound function which returns the iterator for next higher element.
Finally add the length into ans array. The length can be found by upper_bound - nums.begin().*/

vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++) {
        nums[i] += nums[i - 1];
    }
    vector<int> ans;
    for (int i = 0; i < queries.size(); i++) {
        int sum = queries[i];
        auto it = upper_bound(nums.begin(), nums.end(), sum);
        ans.push_back(it - nums.begin());
    }
    return ans;
}