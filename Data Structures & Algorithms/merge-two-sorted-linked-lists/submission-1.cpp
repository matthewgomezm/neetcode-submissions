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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();   // new dummy node
        ListNode* curr = dummy; // point current at dummy

        while (list1 != nullptr && list2 != nullptr)
        {
            if(list1->val <= list2->val)
            {
                curr -> next = list1;  // set the current next to the beginning of smaller val
                list1 = list1-> next;  // advance list1 forward
                curr = curr -> next;   // advance curr forward
            }
            else
            {   // same code for list 2 if its smaller
                curr -> next = list2;
                list2 = list2 ->next;
                curr = curr-> next;
            }
        }
        if(list1 == nullptr)
            curr -> next = list2;
        else
            curr -> next = list1;
        
        return dummy -> next;
    }
};
