class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.length()>s.length())
          return {};
        vector<int>pfreq(26,0);
        vector<int>window(26,0);
        vector<int>ans;
        int k = p.length();
        for(char ch:p){
            pfreq[ch-'a']++;
        }
        for(int i =0;i<k;i++){
            window[s[i]-'a']++;
        }

        if(pfreq == window){
             ans.push_back(0);
        }
        for(int i = k;i<s.length();i++){
            window[s[i-k] -'a']--;
            window[s[i]-'a']++;
            if(pfreq == window)
              ans.push_back(i-k+1);
        }
        return ans;
    }

};