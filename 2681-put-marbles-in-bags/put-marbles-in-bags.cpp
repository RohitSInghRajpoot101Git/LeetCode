typedef long long ll;
class Solution {
public:
    ll putMarbles(vector<int>& weights, int k) {
        vector<int> res;
        ll min = 0,max = 0;
        for(int i = 0; i + 1 < weights.size(); i++){
            res.push_back(weights[i] + weights[i+1]);
        }
        sort(res.begin(),res.end());
        for(int i = 0; i < k - 1; i++){
            min += res[i];
            max += res[res.size() - 1 - i];
        }
        return max - min;
    }
};