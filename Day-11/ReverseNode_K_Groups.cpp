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
        ListNode *temp=head;
        vector<int>res;
        while(temp!=nullptr){
           res.push_back(temp->val);
           temp=temp->next;
        }
        for(int i=0;i<res.size();i+=k){
            int left=i;
            int right=i+k-1;
            if(i+k>res.size()) break;
            while(left<=right){
                swap(res[left],res[right]);
                left++;
                right--;
            }
        }
        temp=head;
        int i=0;
        while(temp!=nullptr){
            temp->val=res[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};
