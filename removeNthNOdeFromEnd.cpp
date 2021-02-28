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
        int length=0;
	ListNode *refNode=head;
	while(refNode!=NULL)
	{
	refNode=refNode->next;
	length++;
	}
	int numberFromBegin= length-k;
	 if (k == length) { 
         if(head->next==NULL)
             return NULL;
		 head->val=head->next->val;
		 head->next= head->next->next;
         return head;
    } 
    else 
    { 
        int diff = length - k;           
        ListNode* prev= NULL;        
        ListNode* curr = head;          
        for(int i = 0;i < diff;i++){ 
            prev = curr;             
            curr = curr->next;       
        } 
        prev->next = curr->next; 
        return head;
    }
    }
};
