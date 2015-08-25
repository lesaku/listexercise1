#include <iostream>
#include "list.h"
using namespace std;

void main()
{
	//Sample Code
	List mylist;
	cout << "push tail O : ";
	mylist.pushToTail('O');
	mylist.print();
	cout << "\npush head L : ";
	mylist.pushToHead('L');
	mylist.print();
	cout << "\npush tail L : ";
	mylist.pushToTail('L');
	mylist.print();
	cout << "\npush tail s : ";
	mylist.pushToTail('s');
	mylist.print();
	cout << "\nreverse : ";
	mylist.reverse();
	mylist.print();
	cout << "\npop tail : ";
	mylist.print();
	mylist.popTail();
	cout << "\nSearch L : ";
	if (mylist.search('L'))
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;
	cout << "Search Z : ";
	if (mylist.search('Z'))
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;

	//TO DO! Write a program that tests your list library - the code should take characters, push them onto a list, 
	//- then reverse the list to see if it is a palindrome!
	
}