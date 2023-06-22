class Solution {
public:
    int sz(ListNode* head)
    {
        ListNode* tmp=head;
        int cnt=0;
        while(tmp!=NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {        
        if(head == NULL || head->next == NULL)  return NULL;
        int size=sz(head);

        if(size - n == 0)
        {
            head = head->next;
            return head;
        }

        ListNode* temp=head;

        for(int i=1;i<size-n;i++)
        {
            temp = temp->next;
        }
        ListNode *deleteNode = temp->next;
        temp->next=temp->next->next;
        delete deleteNode;
        return head; 
    }
};

// https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/977202627/