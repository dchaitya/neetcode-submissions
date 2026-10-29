class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int> s1,t1;

        for(int i=0;i<s.size();i++){
            s1[s[i]]++;
            t1[t[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(s1[t[i]]!=t1[t[i]])return false;
        }
        return true;
    }
};
