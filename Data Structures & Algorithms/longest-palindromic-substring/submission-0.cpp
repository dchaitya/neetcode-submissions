class Solution {
public:
    
    string longestPalindrome(string s) {
        int n=s.size();
        int ans=1,in=0;
        for(int i=0;i<n;i++){
            int left=i-1,right=i+1;
            while(left>=0 && right<n && s[left]==s[right]){
                if(ans<right-left+1){
                    ans=right-left+1;
                    in=left;
                }
                left--;
                right++;
            }
            left=i,right=i+1;
            while(left>=0 && right<n && s[left]==s[right]){
                if(ans<right-left+1){
                    ans=right-left+1;
                    in=left;
                }
                left--;
                right++;
            }
        }
        return s.substr(in,ans);
    }
};
