class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>s1freq(26,0);
        vector<int>s2window(26,0);
        if(s1.length() > s2.length()) return false;
    
        for(char c:s1){
            s1freq[c-'a']++;
        }

        int k = s1.length();

        for(int i = 0;i<k;i++){
            s2window[s2[i]-'a']++;
        }
         if (s1freq == s2window)
            return true;

        for (int  i= k;i<s2.length();i++){
            s2window[s2[i-k] - 'a']--;
            s2window[s2[i] - 'a']++;
            if(s1freq == s2window) return true;
        }
        return false;
    }
};