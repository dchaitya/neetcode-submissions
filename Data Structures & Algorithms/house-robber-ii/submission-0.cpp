class Solution {
public:
    int fun(vector<int>& nums,int i,bool f,vector<vector<int>>& dp){
        if(i>=nums.size())return 0;
        if(dp[i][f]!=-1)return dp[i][f];
        if(i==0){
            return max(nums[i]+fun(nums,2,1,dp),fun(nums,1,0,dp));
        }
        if(i==nums.size()-1 && f)return 0;
        return dp[i][f]=max(nums[i]+fun(nums,i+2,f,dp),fun(nums,i+1,f,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int> (2,-1));
        return fun(nums,0,false,dp);
    }
};
