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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* temp = head;
        int total = 0;
        while(temp != NULL) {
            total++;
            temp = temp->next;
        }
        temp = head;
        total /= 2;
        int cnt = 0;
        while(cnt != total - 1) { // total - 1 = 2, cnt = 0, 1
            temp = temp->next;
            cnt++;
        }
        temp->next = temp->next->next;
        return head;
    }
};