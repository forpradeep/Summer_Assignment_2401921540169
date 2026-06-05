class Solution {
public:
    void reverseString(vector<char>& s) {
        // int left = 0;
        // int right = s.size()-1;
        int n = s.size();
        for(int i = 0;i<n/2;i++){
            swap(s[i],s[n-i-1]);
            // left++;
            // right--;
        }
    }
};

// solved by two methods

// T.C: O(n) S.C: O(1)