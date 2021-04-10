#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Node
{
    int data;
    struct Node *next;
}

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node* PrevNode= nullptr;
        struct Node* currNode= head;
        while(currNode!=NULL)
        {
            struct Node* nextNode= currNode->next;
            currNode->next=PrevNode;
            PrevNode=currNode;
            currNode=nextNode;
        }
        return PrevNode;
    }
    
};
    
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}
