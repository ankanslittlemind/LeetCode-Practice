// https://leetcode.com/problems/crawler-log-folder/
/* Approach:
1. First thought was to implement stack.
2. Since we need to follow the path to Main, we would the size of the stack, which represents currently where we are*/
int minOperations(vector<string>& logs) {
    stack<string> directory;
    for (int i = 0; i < logs.size(); i++) {
        // stay in current directory
        if (logs[i] == "./") continue;
        // go to parent folder
        else if (logs[i] == "../") {
            if (!directory.empty()) directory.pop();
        }
        // go to new folder, push to keep track
        else {
            directory.push(logs[i]);
        }
    }
    return directory.size();
}