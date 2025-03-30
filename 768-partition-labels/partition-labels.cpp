class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> cnt1;
        vector<int> res;
        int count = 0;
        int st = 0,e = 0;
        for(int i = 0; i < s.size(); i++){
            cnt1[s[i]] = i;
        }
        for(int i = 0; i < s.size(); i++){
            e = max(e,cnt1[s[i]]);
            if(i == e){
                res.push_back(e - st + 1);
                st = i + 1;
            }
        }
        return res;
    }
};