class Solution {
public:
    int fun(vector<int>& nums,int i,vector<int>& dp){
        if(i>=nums.size())return 0;
        if(dp[i]!=-1)return dp[i];
        return dp[i]=max(nums[i]+fun(nums,i+2,dp),fun(nums,i+1,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);

        return fun(nums,0,dp);
    }
};
