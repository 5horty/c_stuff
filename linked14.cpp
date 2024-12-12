#include <iostream>


class Node{
public:
	int value;
	Node* next;
};

void insert(Node** head,int newval){

	Node* newnode = new Node();
	newnode->value = newval;
	newnode->next = *head;
	*head = newnode;


}


void printlist(Node* n){

	while(n != nullptr){
		std::cout << n->value << "\n";
		n= n->next;
	}


}

void append(Node** head,int newval){

	Node* newnode = new Node();
	newnode->value = newval;
	newnode->next = nullptr;

	if(*head == nullptr){

		*head = newnode;
		return;
	}

	Node* current = *head;


	while(current->next != nullptr){

		current = current->next;
	}
	current->next = newnode;





}

void deletelist(Node* head){

	Node* current = head;
	Node* nextnode;

	while(current != nullptr){

		nextnode = current->next;
		delete current;
		current = nextnode;
	}


}


int main(){



	Node* head = nullptr;

	insert(&head, 1);
	insert(&head, 2);
	insert(&head, 3);
	insert(&head, 4);
	insert(&head, 5);
	insert(&head, 6);

	append(&head, 21);
	append(&head, 31);

	printlist(head);

	deletelist(head);

	head = nullptr;
	return 0;

}
