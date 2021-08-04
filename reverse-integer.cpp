#include <iostream>

class Solution {
public:
    int reverse(int x) {
        while (x / 10 != 0) {
            std::cout << x % 10;
            x = x / 10;
            return 0;
        }
        return 0;
    };
};


int main() {
    Solution solution;
    solution.reverse(3467);

}