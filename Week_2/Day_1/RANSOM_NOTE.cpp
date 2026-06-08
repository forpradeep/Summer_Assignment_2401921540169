class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // if(magazine.find(ransomNote) != string::npos){
        //     return true ;
        // }
        // return false;
        //  wrong approach

        vector<int>freq(26,0);
        for(char c :ransomNote){
            freq[c-'a']++;
        }
        for(char c : magazine){
            freq[c-'a']--;

        }
        for(int count : freq){
        if(count > 0)
          return false; // we still need more char 
        }

        
        // rnote = "aa" mag = "aab"

        // now freq = a=2
        // and then mag = a = 0 and b = -1
        // means aa can be formed thus a = 0 and b<0 means b is extra 

        // but if rnote = " a" and mag = "b" 
        // now freq = a =1 and then b= -1 
        // a>0 means no match found 

        
        return true ;
    }
};