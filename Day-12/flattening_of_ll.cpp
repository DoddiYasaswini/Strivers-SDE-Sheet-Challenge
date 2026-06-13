/*
Definition of special linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *child;
    ListNode()
    {
        val = 0;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode* next2)
    {
        val = data1;
        next = next1;
        child = next1;
    }
};
*/

class Solution {
public:
    ListNode* flattenLinkedList(ListNode* &head) {
    if (!head) return nullptr;
    ListNode *temp = head;
    vector<int> res;
    while(temp) {
        ListNode *newhead = temp;
        while(newhead) {
            res.push_back(newhead->val);
            newhead = newhead->child;
        }
        temp = temp->next;
    }

    sort(res.begin(), res.end());
    ListNode *newlist = new ListNode(res[0]);
    ListNode *temp1 = newlist;
    for(int i = 1; i < res.size(); i++) {
        temp1->child = new ListNode(res[i]);
        temp1 = temp1->child;
    }
    
    return newlist;
    }
};
