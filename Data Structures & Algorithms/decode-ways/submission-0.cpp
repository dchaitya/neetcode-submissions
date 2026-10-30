class Solution {
public:
    int fun(const string& s, int i, vector<int>& memo){
        if(i==s.size()) return 1;
        if(s[i]=='0') return 0;
        if(memo[i] != -1) return memo[i];
        int res = fun(s, i+1, memo);
        if (i < s.size() - 1) {
            if (s[i] == '1' ||
               (s[i] == '2' && s[i + 1] < '7')) {
                res += fun(s, i+2, memo);
            }
        }
        return memo[i] = res;
    }
    int numDecodings(string s) {
        vector<int> memo(s.size(), -1);
        return fun(s, 0, memo);
    }
};