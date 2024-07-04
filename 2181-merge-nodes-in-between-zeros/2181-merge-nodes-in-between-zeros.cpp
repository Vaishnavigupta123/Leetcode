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
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* current = head->next;
        ListNode* end = current;

        while(current != NULL)
        {
            int sum = 0;
            //ListNode* end = start;
            while(end->val != 0)
            {
                sum = sum + end->val;
                end = end->next;
            }
            //assign the sum of curr node's value
            current->val = sum;
            end = end->next;
            current->next = end;
            current = current->next;
        }
        return head->next;
    }
};