#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
        if (freq[nums[i]] > 1)
            return true;
    }
    return false;
}

int main() {
    int n, i;
    vector<int> v;
    while (n--) {
        cin >> i;
        v.push_back(i);
    }
    if (containsDuplicate(v))
        cout << "true";
    else
        cout << "false";
    return 0;
}