class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1 = word1.size();
        int w2 = word2.size();
        int max_l = max(word1.size(),word2.size());
        int t = 0;
        string res;
        while(t < max_l){
            if(t < w1){
                res.push_back(word1[t]);
            }
            if(t < w2){
                res.push_back(word2[t]);
            }
            t++;
        }
        return res;
    }
};