#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* cur = head;
        int carry = 0;
        while (l1 || l2 || carry) {
            int num = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = num / 10;
            cur->next = new ListNode(num % 10);
            cur = cur->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return head->next;
    }
int main()
{
    ListNode* l1= new ListNode(2);
    l1->next=new ListNode(4);
    l1->next->next=new ListNode(4);
    l1->next->next->next=new ListNode(5);
    l1->next->next->next=new ListNode(8);
    
    
    
    ListNode* l2= new ListNode(5);
    l2->next=new ListNode(6);
    l2->next->next=new ListNode(5);
    
    ListNode* res= addTwoNumbers(l1,l2);
    
    while(res!=NULL){
        cout<< res->val<< "  ";
        res=res->next;   
    }
	return 0;
}
