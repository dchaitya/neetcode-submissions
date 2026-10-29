class Solution {
    vector<vector<int>> res;
    void perm(vector<int>& nums,vector<int>& permu,vector<bool>& pick){
        if(permu.size()==nums.size()){
            res.push_back(permu);
            return;
            }
        for(int i=0;i<nums.size();i++){
            if(!pick[i]){
                permu.push_back(nums[i]);
                pick[i]=true;
                perm(nums,permu,pick);
                pick[i]=false;
                permu.pop_back();
            }

        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> pick(nums.size(),false);
        vector<int> permu;
        perm(nums,permu,pick);
        return res;
    }
};
