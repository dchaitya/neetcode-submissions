class Solution {
public:
    vector<string> ans;
    void fun(int n,string& tmp,int op,int cl){
        if(op==n && cl==n){
            ans.push_back(tmp);
            return;
        }
        if(op>cl){
            tmp+=')';
            fun(n,tmp,op,cl+1);
            tmp.pop_back();
        }
        if(op<n){
            tmp+='(';
            fun(n,tmp,op+1,cl);
            tmp.pop_back();
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        fun(n,s,0,0);
        return ans;

    }
};
