#include <cctype>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        int n = cleaned.size();

        for (int i = 0; i < n; i++) {
            if (i >= n / 2)
                break;
            if (cleaned[i] != cleaned[n - i - 1])
                return false;
        }

        return true;
    }
};

// T.C: O(n) S.C: O(n)  