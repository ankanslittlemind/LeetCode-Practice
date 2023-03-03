// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
int strStr(string s, string n)
{
    int i = 0;
    int j = n.size();
    for (i = 0; i < s.size(); i++)
    {
        // make a substring of same size as of 'n', starting with i=0 of string 's'
        string a = s.substr(i, j);
        if (a == n)
            return i;
    }
    return -1;
}