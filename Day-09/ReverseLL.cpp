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
    ListNode* reverseList(ListNode* head) {
        struct ListNode* temp1=head;
        vector<int>res;
        while(temp1!=NULL){
            res.push_back(temp1->val);
            temp1=temp1->next;
        }
        reverse(res.begin(),res.end());
        temp1=head;
        int i=0;
        while(temp1!=NULL){
            temp1->val=res[i];
            i++;
            temp1=temp1->next;
        }
        return head;
    }
};
