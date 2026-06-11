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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int length=0;
        while(temp!=nullptr){
            length++;
            temp=temp->next;
        }
        if(n==length){
            head=head->next;
        }
        else if(n==1){
            ListNode *temp=head;
            ListNode *temp2=nullptr;
            while(temp->next!=nullptr){
            temp2=temp;
            temp=temp->next;
        }
        temp2->next=nullptr;
        }
        else{
        temp=head;
        ListNode *temp2=nullptr;
        for(int i=0;i<length-n;i++){
            temp2=temp;
            temp=temp->next;
        }
        temp2->next=temp->next;
        }
        delete temp;
        return head;
    }
};
