class Solution {
    vector<vector<int>> ans;
    void fun(vector<int> &nums,int idx,vector<int> tmp){
        if(idx==nums.size()){
            ans.push_back(tmp);
            return;
        }
        fun(nums,idx+1,tmp);

        tmp.push_back(nums[idx]);
        fun(nums,idx+1,tmp);
        tmp.pop_back();
        return;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        fun(nums,0,{});
        return ans;
    }
};
