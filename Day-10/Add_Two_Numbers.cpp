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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy=new ListNode(-1);
        ListNode *temp=dummy;
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        int carry=0;
        while(temp1!=nullptr && temp2!=nullptr){
            int sum=carry+(temp1->val+temp2->val);
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            carry=sum/10;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(carry==0){
            if(temp1!=nullptr)
            temp->next=temp1;
            if(temp2!=nullptr)
            temp->next=temp2;
        }
        else{
            int sum;
            if(temp1!=nullptr){
            while(temp1!=nullptr){
                sum=carry+(temp1->val);
                temp->next=new ListNode(sum%10);
                temp=temp->next;
                carry=sum/10;
                temp1=temp1->next;
            }
            if(carry!=0){
                temp->next=new ListNode(sum%10);
            }
            }
            else{
            while(temp2!=nullptr){
                sum=carry+(temp2->val);
                temp->next=new ListNode(sum%10);
                temp=temp->next;
                carry=sum/10;
                temp2=temp2->next;
            }
            if(carry!=0){
                temp->next=new ListNode(sum%10);
            }
            }
            if(carry!=0){
                temp->next=new ListNode(carry);
            }
        }
        return dummy->next;
    }
};
