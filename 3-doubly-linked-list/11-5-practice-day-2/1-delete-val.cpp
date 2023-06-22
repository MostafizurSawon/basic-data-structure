class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val) 
        {
            head = head->next;
        }

        if(head == NULL)    return NULL;
        
        ListNode *tmp=head;

        while(tmp->next!=NULL)
        {   
            if(tmp->next->val==val)
            {
                // cout<<head->next->val;
                ListNode* dl=tmp->next;
                tmp->next=tmp->next->next;
                delete dl;
            }
            else    tmp=tmp->next;
        }
        return head;
    }
};



// https://leetcode.com/problems/remove-linked-list-elements/submissions/977184273/