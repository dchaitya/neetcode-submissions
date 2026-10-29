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
        // vector<vector<int>> dp(n+1,vector<int> (2,-1));
        // return fun(nums,0,false,dp);

        vector<vector<int>> dp(n+2,vector<int>(2,0));
        if (n == 1) return nums[0];
        for(int i=n-2;i>=0;i--){
            dp[i][0]=max(dp[i+1][0],nums[i]+dp[i+2][0]);
        }
        for(int i=n-1;i>0;i--){
            dp[i][1]=max(dp[i+1][1],nums[i]+dp[i+2][1]);
        }
        return max(dp[0][0],dp[1][1]);
    }
};
