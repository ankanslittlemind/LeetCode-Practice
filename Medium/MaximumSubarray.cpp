#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums) {
    int maxSum = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        int currentSum = 0;
        for (int j = i; j < nums.size(); j++) {
            currentSum += nums[j];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }
    return maxSum;
}
int main() {
    int n, i;
    vector<int> nums;
    while (n--) {
        cin >> i;
        nums.push_back(i);
    }
    cout << maxSubArray(nums);
}