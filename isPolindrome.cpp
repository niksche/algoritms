//https://leetcode.com/problems/palindrome-number/

#include <iostream>
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int revValue = 0;
        int pop = 0;
        while (revValue < x) {
            pop = x % 10;
            x /= 10;
            revValue = revValue * 10 + pop;
        }
        return x == revValue || x == revValue/10;
    }
};