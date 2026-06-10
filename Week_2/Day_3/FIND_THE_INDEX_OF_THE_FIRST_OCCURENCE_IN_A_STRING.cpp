#include <string>
#include <iostream>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int h_len = haystack.length();
        int n_len = needle.length();
        
        // Edge case: if needle is empty
        if (n_len == 0) return 0;
        
        // Loop through haystack, avoiding out of bounds checks
        for (int i = 0; i <= h_len - n_len; ++i) {
            if (haystack.substr(i, n_len) == needle) {
                return i; // First occurrence found
            }
        }
        return -1;
    }
};
