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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        int grp = cnt/k;
        temp = head;
        ListNode* reverse = head;
        for(int i = 0; i < grp; i++) {
            stack<int> st;
            reverse = temp;
            for(int i = 0; i < k; i++) {
                st.push(temp->val);
                temp = temp->next;
            }
            for(int i = 0; i < k; i++) {
                reverse->val = st.top();
                st.pop();
                reverse = reverse->next;
            }
        }
        return head;
    }
};