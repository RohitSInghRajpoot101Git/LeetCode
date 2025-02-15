class Solution {
public:
    int punishmentNumber(int n) {
        int punishNum = 0;
        for (int i = 1; i <= n; i++) {
            long long square = 1LL * i * i;
            if (isAvail(0, 0, to_string(square), 0, i)) {
                punishNum += square;
            }
        }
        return punishNum;
    }

    bool isAvail(int accu, int run, const string& numchar, int s, int target) {
        if (s == numchar.size()) {
            return target == accu + run;
        }
        int d = numchar[s] - '0';
        return isAvail(accu, run * 10 + d, numchar, s + 1, target) || 
               isAvail(accu + run, d, numchar, s + 1, target);
    }
};
