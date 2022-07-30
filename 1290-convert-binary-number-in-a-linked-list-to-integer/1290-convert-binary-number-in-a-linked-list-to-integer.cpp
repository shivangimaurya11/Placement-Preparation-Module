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
    int getDecimalValue(ListNode* head) {
        if(head==NULL)
            return 0;
        int count=0;
        ListNode* curr=head;
        while(curr->next!=NULL)
        {
           curr=curr->next;
            count++;
        }
        int num=0;
        while(head!=NULL)
        {
            num=num+(pow(2,count--)*head->val);
            head=head->next;
        }
        return num;
        
    }
};