// https://leetcode.com/problems/string-compression/description/
vector<char> convert(int n) {
    vector<char> nums;
    while (n > 0) {
        nums.push_back(n % 10 + '0');
        n = n / 10;
    }
    reverse(nums.begin(), nums.end());
    return nums;
}
int compress(vector<char>& chars) {
    int i = 0, k = 0;
    while (i < chars.size()) {
        int count = 1;
        while (i < chars.size()-1 && chars[i] == chars[i+1]) {
            i++;
            count++;
        }
        if (count == 1) {
            chars[k++] = chars[i];
        }
        else {
            chars[k++] = chars[i];
            vector<char> nums = convert(count);
            for (int j = 0; j < nums.size(); j++) {
                chars[k++] = nums[j];
            }
        }
        i++;
    }
    return k;
}