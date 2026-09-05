#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find ordering of courses
    vector<int> findOrder(int numCourses, 
                          vector<vector<int>>& prerequisites) {
        // Build adjacency list
        vector<vector<int>> adj(numCourses);
        // Build in-degree array
        vector<int> inDegree(numCourses, 0);

        // Fill adjacency and in-degree
        for (auto& pre : prerequisites) {
            int a = pre[0], b = pre[1];
            adj[b].push_back(a);
            inDegree[a]++;
        }

        // Initialize queue with zero in-degree nodes
        queue<int> q;
        for (int i = 0; i < numCourses; i++) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }

        // Create result list
        vector<int> order;

        // Process queue
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            order.push_back(node);

            // Reduce in-degree of neighbors
            for (int nei : adj[node]) {
                inDegree[nei]--;
                if (inDegree[nei] == 0) {
                    q.push(nei);
                }
            }
        }

        // Return order if valid, else empty
        if ((int)order.size() == numCourses) {
            return order;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<vector<int>> prerequisites = {{1, 0}, {2, 0}, {3, 1}, {3, 2}};
    int numCourses = 4;
    vector<int> ans = sol.findOrder(numCourses, prerequisites);
    for (int x : ans) cout << x << " ";
    return 0;
}
