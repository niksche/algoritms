//https://leetcode.com/problems/add-two-numbers/
//  Definition for singly-linked list.

#include <memory>
#include "iostream"
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    Solution() : result(new ListNode()), answer(result), moveMem(0) {};
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) {
            result = l2;
            return answer;
        }
        if (l2 == nullptr) {
            result = l1;
            return answer;
        }

        int tmp = (l1->val + l2->val) % 10;
        int tmp2 = (l1->val + l2->val) / 10;
        result->val += tmp;
        result->next = new ListNode(0);
        result->next->val += tmp2;
//        std::cout << result->val << " ";
        result = result->next;
        return addTwoNumbers(l1->next, l2->next);
    }
    void printRes() {
        if (answer == nullptr) {
            std::cout << "bullshit";
        }
        while (answer != nullptr) {
            std::cout << answer->val << " ";
            answer = answer->next;
        }
    }
    ListNode *result;
    ListNode *answer;
    int moveMem;
};