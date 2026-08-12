/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* node = nullptr;
        ListNode* node2 = nullptr;
 
        while(temp != nullptr) {
            node = temp->next;
            temp->next = node2;
            node2 = temp;
            temp = node;
        }
        return node2;
    }
};