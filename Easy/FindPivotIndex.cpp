#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int pivotIndex(vector<int> &nums) {
        int sum = 0, size = nums.size();
        for (int i = 0; i < size; i++) {
            sum += nums[i];
        }
        int current_sum = 0;
        int ans = -1;
        for (int i = 0; i < size; i++) {
            sum -= nums[i];
            if (sum == current_sum) {
                return i;
            }
            current_sum += nums[i];
        }
        return -1;
    }
};
int main() {
    int n, i;
    vector<int> v;
    while (n--) {
        cin >> i;
        v.push_back(i);
    }
    Solution solve;
    int ans = solve.pivotIndex(v);
}