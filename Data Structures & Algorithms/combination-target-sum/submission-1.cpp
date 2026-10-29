class Solution {
    vector<vector<int>> ans;
    void fun(vector<int> &nums,int i,int sum,int target,vector<int> &tmp){
        if(i==nums.size()){
            if(sum==target)ans.push_back(tmp);
            return;
        }
        fun(nums,i+1,sum,target,tmp);
        if(sum+nums[i]<=target){
            tmp.push_back(nums[i]);
            sum+=nums[i];
            fun(nums,i,sum,target,tmp);
            tmp.pop_back();
            sum-=nums[i];
        }
        return;
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> tmp;
        fun(nums,0,0,target,tmp);
        return ans;
    }
};
