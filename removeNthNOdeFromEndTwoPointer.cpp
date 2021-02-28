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
    ListNode* removeNthFromEnd(ListNode* head, int k) {
     ListNode* slowPointer=head;
	ListNode* fastPointer=head;
	int counter =1;
	while(counter<=k){
		fastPointer=fastPointer->next;
		counter++;
	}
	 if (fastPointer == NULL) { 
         if(head->next==NULL)
             return NULL;
		 head->val=head->next->val;
		 head->next= head->next->next;
		 return head;
    } 
	while(fastPointer->next!=NULL){
		slowPointer= slowPointer->next;
		fastPointer= fastPointer->next;
	}
	slowPointer->next=slowPointer->next->next;
        return head;
}
};
