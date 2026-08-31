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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }

        int firstCrit = -1;      
        int prevCrit = -1;      
        int minDistance = INT_MAX; 

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* nxt = curr->next;
        int i = 2;                

        while (nxt) {
            
            if ((curr->val > prev->val && curr->val > nxt->val) || 
                (curr->val < prev->val && curr->val < nxt->val)) {
        
                if (firstCrit == -1) {
                    firstCrit = i;
                } else {
                    minDistance = min(minDistance, i - prevCrit);
                }
                prevCrit = i;
            }
            
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
            i++;
        }
        if (firstCrit == prevCrit) {
            return {-1, -1};
        }
        return {minDistance, prevCrit - firstCrit};
    }
};