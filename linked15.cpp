#include <iostream>

class node{
public:
	int value;
	node* next;

};


void insert(node** head,int newval){
	node* newnode = new node();
	newnode->value = newval;
	newnode->next = *head;
	*head = newnode;


}

void append(node** head,int newval){
	node* newnode  = new node();
	newnode->value = newval;
	newnode->next = nullptr;

	if(*head == nullptr){
	*head = newnode;
	return;

	}
	node* current = *head;

	while(current->next != nullptr){

		current = current->next;

	}
	current->next = newnode;





}

void printlist(node* n){

	while(n != nullptr){

		std::cout << n->value << "\n";
		n = n->next;
	}


}

void deletelist(node* head){

	node* current = head;
	node* nextnode;
	while(current != nullptr){

		nextnode = current->next;
		delete current;
		current = nextnode;
	}

}


void reverse(node** head){

	node* prev = nullptr; // create pointers
	node* current = *head;
	node* next = nullptr;

	while(current != nullptr){ // while not empty


		next = current->next; //next one is the currents next
		current->next = prev; // current next  = null first
		prev = current; // prev is equal to current so in 
		current = next;
	}

	*head = prev;

}




int main(){

	node* head = nullptr;


	insert(&head,5);
	insert(&head,4);
	insert(&head,3);
	insert(&head,2);
	insert(&head,1);
	insert(&head,0);

	append(&head,21);

	printlist(head);

	reverse(&head);

	printlist(head);

	deletelist(head);

	head = nullptr;

	return 0;


}

