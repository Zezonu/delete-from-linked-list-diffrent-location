#include<iostream >
using namespace std;
class node
{
public:
	int val;
	node* next;
};

	
	void deleteF(node**head) 
	{
	

		if (*head==NULL) 
		{
		
			cout << "linked list have only one node are you sure you want to delete " << endl;
			return;
		}
		
		{
			node* temp = *head;
			*head = (*head)->next;
			delete temp;
		}
	
	
	}
	void display(node*head) 
	{
		while (head!= NULL)
		{

			cout << head->val << "->";
			head = head->next;

		}
		
		cout << "NULL" << endl;

		
	}

	void deleteL(node *head) 
	{
		node* temp=new node();
		node* previous = NULL;
		temp = head;
		while (temp->next!=NULL) 
		{
			previous = temp;
			temp = temp->next;

		}
		previous->next = NULL;
		delete temp;
	
	
	}
	void spaci(node*head) 
	{
		int pos;
		int i = 0;
		cout << "Enter The Position You Want To Delete From " << endl;
		cin >> pos;
		node* temp;
		node* toDelete;
		temp = head;
		while (i < pos - 1) 
		{
			temp = temp->next;
			i++;
		}
		toDelete = temp->next;
		temp->next = toDelete->next;
		delete toDelete;
	
	
	
	}
	void getL(node *head ) 
	{
		int count = 0;
		node* temp;
		temp = head;
		while (temp!=NULL) 
		{
			count++;
			temp = temp->next;
		
		}
		cout << "the length of the linked list is " <<count<< endl;
		
	}
	void reverseLinked(node**head) 
	{
		node* prev = NULL;
		node* current = *head;
		node* Nextn = *head;
		while (Nextn!=NULL) 
		{
			Nextn = current->next;
			current->next = prev;
			prev = current;
			current = Nextn;
		
		
		}
		*head = prev;
	
	}



int main() 
{
	node* head = new node();
	node* frist = new node();
	node* scound = new node();
	node* third = new node();
	head->val = 5;

	head->next = frist;
	frist->val = 5;
	frist->next = scound;
	scound->val = 6;
	scound->next = third;
	third->val = 7;
	third->next = NULL;
	/*cout << "before deleting first node " << endl;
	display(head);
	deleteF(&head);
	cout << "after deleting fist node " << endl;
	display(head);

	cout << "before deleting scound node " << endl;
	display(head);
	deleteF(&head);
	cout << "after deleting scound   node " << endl;
	display(head);
	cout << "before deleting third  node " << endl;
	display(head);
	deleteF(&head);
	cout << "after deleting third node " << endl;
	display(head);
	cout << "before deleting last  node " << endl;
	display(head);
	deleteF(&head);
	cout << "after deleting last  node " << endl;
	display(head);*/
	//deleteL(head);

	//display(head);
	//getL(head);
	//
	// spaci(head);


	reverseLinked(&head);
	display(head);

}