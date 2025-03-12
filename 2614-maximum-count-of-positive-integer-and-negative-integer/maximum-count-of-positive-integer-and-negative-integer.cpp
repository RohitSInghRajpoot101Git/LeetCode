class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int nega = 0;
        int posi = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0) nega++;
            if(nums[i] > 0) posi++;
        }
        if(posi > nega) return posi;
        else return nega;
    }
};