class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
       int n = s.length();
       vector<string>words;
       string temp = "";
       for(int i = 0;i<n;i++){
        if(s[i]!=' '){
            temp += s[i];
        }else{
            words.push_back(temp);
            temp = "";
        }
       } 
       words.push_back(temp);
       for(int i = 0;i<words.size();i++){
        reverse(words[i].begin(),words[i].end());
       }
       for(int i = 0;i<words.size();i++){
        ans += words[i];
        if(( i != words.size()-1)){
            ans += " ";
        }
       }
       return ans;
    }
};