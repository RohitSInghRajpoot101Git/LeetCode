class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        const int n = grid[0].size();
        long long ans1 = LLONG_MAX;
        long long sRow0 = accumulate(grid[0].begin(),grid[0].end(),0LL);
        long long sRow1 = 0;

        for (int i = 0; i < n; ++i){
            sRow0 -= grid[0][i];
            ans1 = min(ans1,max(sRow0,sRow1));
            sRow1 += grid[1][i];
        }
        return ans1;
    }
};