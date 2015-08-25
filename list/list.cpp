#include <iostream>
#include "list.h"
using namespace std;

List::~List() {
	for(Node *p; !isEmpty(); ) {
		p=head->next;
		delete head;
		head = p;
	}
}

void List::pushToHead(char el)
{
	head = new Node(el, head);
	if(tail==0)
	{
		tail = head;
	}
}
void List::pushToTail(char el)
{
	//TO DO!
	Node *tmp = new Node(el, NULL);
	if (isEmpty())
	{
		head = tmp;
		tail = tmp;
	}
	else
	{
		tail->next = tmp;
		tail = tmp;
	}
}
char List::popHead()
{
	char el = head->data;
	Node *tmp = head;
	if(head == tail)
	{
		head = tail = 0;
	}
	else
	{
		head = head->next;
	}
	delete tmp;
	return el;
}
char List::popTail()
{
	// TO DO!
	char el = tail->data;
	Node *tmp = head;
	if (head == tail)
	{
		head = tail = 0;
	}
	else
	{
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		delete tail;
		tail = tmp;
		tmp->next = NULL;
	}
	return el;
}
bool List::search(char el)
{
	// TO DO! (Function to return True or False depending if a character is in the list.
	Node *tmp = head;
	while (tmp != NULL)
	{
		if (tmp->data == el)
			return true;
		tmp = tmp->next;
	}
	return false;
}
void List::reverse()
{
	// TO DO! (Function is to reverse the order of elements in the list.
	Node *tmp1 = head;
	Node *tmp2 = tail;
	while (tmp2 != head)
	{
		tmp1 = head;
		while (tmp1 != tmp2)
		{
			if (tmp1->next == tmp2)
			{
				tmp2->next = tmp1;
				tmp2 = tmp2->next;
				break;
			}
			tmp1 = tmp1->next;
		}
	}
	head = tail;
	tail = tmp2;
	tmp2->next = NULL;
}
void List::print()
{
	if(head  == tail)
	{
		cout << head->data;
	}
	else
	{
		Node *tmp = head;
		while(tmp!=tail)
		{
			cout << tmp->data;
			tmp = tmp->next;
		}
		cout << tmp->data;
	}
}