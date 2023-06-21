class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        ListNode *deleteNode = node->next;
        node->next = node->next->next;
        delete deleteNode;
    }
};

// https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/976315431/