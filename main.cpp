#include "manager.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<Contact> c;
	createContact(c);
	createContact(c);
	createContact(c);
	deleteContact(c);
	editContact(c);	
	for (Contact n : c)
	{
		cout << n.phone << endl;
	}
	return 0;
}
