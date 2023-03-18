// https://leetcode.com/problems/valid-palindrome/

bool helper(string &p, int si, int ei) {
    if (si >= ei) 
        return true;
    if (p[si] == p[ei]) 
        return helper(p, ++si, --ei);
    return false;
}
bool isPalindrome(string s) {
    string p;
    for (int i = 0; i < s.size(); i++) {
        if (isalnum(s[i])) {
            p += tolower(s[i]);
        }
    }
    return helper(p, 0, p.size()-1);
}