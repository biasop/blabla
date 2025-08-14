#include<iostream>
#include<stack>
#include<queue>
#include<string>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        ListNode* prev = nullptr;

        while (cur && cur->next) {
            ListNode* cur2 = cur;
            while (cur2->val == cur->val) {
                cur2 = cur2->next;
            }
            if (prev) {
                prev->next = cur2;
            } else {
                head = cur2;
            }
            prev = cur2;
            cur = cur2->next;
        }
        return head;
    }
};

int main() {
    
} 