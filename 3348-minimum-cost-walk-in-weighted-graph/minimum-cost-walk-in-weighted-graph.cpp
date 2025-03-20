class Solution {
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        vector<int> parent(n), min_path_cost(n, -1);
        iota(parent.begin(), parent.end(), 0);

        function<int(int)> find_root = [&](int node) {
            if (parent[node] != node) {
                parent[node] = find_root(parent[node]);
            }
            return parent[node];
        };

        for (auto& edge : edges) {
            int source = edge[0], target = edge[1], weight = edge[2];
            int s_root = find_root(source);
            int t_root = find_root(target);

            min_path_cost[t_root] &= weight;

            if (s_root != t_root) {
                min_path_cost[t_root] &= min_path_cost[s_root];
                parent[s_root] = t_root;
            }
        }

        vector<int> res;
        for (auto& q : query) {
            int start = q[0], end = q[1];
            if (start == end) {
                res.push_back(0);
            } else if (find_root(start) != find_root(end)) {
                res.push_back(-1);
            } else {
                res.push_back(min_path_cost[find_root(start)]);
            }
        }
        return res;
    }
};