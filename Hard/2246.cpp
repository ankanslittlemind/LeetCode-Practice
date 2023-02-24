/* 
    1. Build graph, parent->[children]
    2. DFS
*/
#include<bits/stdc++.h>
using namespace std;
int longestPath(vector<int>& parent, string s) {
    unordered_map<int, vector<int>> graph;
    for (int i = 0; i < parent.size(); i++) {
        graph[parent[i]].push_back(i);
    }
    int ans = 1;
    dfs()
}
int main() {
    
}
