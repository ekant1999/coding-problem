using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;
  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicates(LinkedList *linkedList) {
  LinkedList *currentNode= linkedList;
	LinkedList *nextNode= currentNode->next;
	while(currentNode->next!=nullptr){
		if(currentNode->value==nextNode->value){
			currentNode->next=nextNode->next;
			delete(nextNode);
			nextNode=currentNode->next;
		}
		else{
			currentNode=currentNode->next;
			nextNode=nextNode->next;
		}
	}
  return linkedList;
}
