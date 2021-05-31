using namespace std;
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;
  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList) {
  LinkedList *head= linkedList;
	LinkedList *currentHead= linkedList;
	LinkedList *forwardHead= linkedList->next;
	while(forwardHead!=nullptr)
	{
		if(currentHead->value == forwardHead->value)
		{
			//do nothing;
		}
		else
		{
			currentHead->next=forwardHead;
			currentHead=forwardHead;
		}
		forwardHead = forwardHead->next;
	}
	currentHead->next=forwardHead;
  return head;
}
