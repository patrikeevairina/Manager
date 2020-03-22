#include <iostream>
#include <vector>
#include <iterator>

#include "manager.h"

using namespace std;

vector<Contact>& createContact(vector<Contact> &c)
{
	string nm; string ph; int gr;
	cout << "Enter the name: ";
	cin >> nm;
	cout << "Enter the number: ";
	cin >> ph;
	cout << "Enter the group: ";
	cin >> gr;
	c.reserve(c.size()+1);	
	c.emplace_back(Contact(nm, ph, gr));
	
	return c;
}

vector<Contact>& deleteContact(vector<Contact> &c)
{
	cout << "Enter name of the contact you want to delete: ";
	string name;
	cin >> name;
	size_t idx = 0;
//	cout << name << endl;
	for (size_t i = 0; i < c.size(); i++)
	{
		if (c[i].name != name)
		{}
		else
			idx = i;
		
	}
	vector <Contact>::iterator it;
	it = c.begin();
	it += idx; 
	c.erase(it);
	return c;
}

vector<Contact>& editContact(vector<Contact> &c)
{
	cout << "Edit contact" << endl;
	cout << "Enter name: " << endl;
	string nm;
	cin >> nm;
	size_t idx = 0;
	for (size_t i = 0; i < c.size(); i++)
	{
		if (c[i].name != nm)
		{}
		else
		{
			idx = i;
		}
		
	}
	cout << "Edit contact field" << endl
	     << "1. Edit name" << endl
	     << "2. Edit number" << endl
	     << "3. Edit group" << endl
	     << "4. Back" << endl;
	int ch;
	cin >> ch;
	switch (ch)
	{
		case 1:
		{
			cout << "Enter new name: ";
			string nwnm;
			cin >> nwnm;
			c[idx].name = nwnm;
		}
		break;
		case 2:
		{
			cout << "Enter new number: ";
			string nwph;
			cin >> nwph;
			c[idx].phone = nwph;
		}
		break;
		case 3:
		{
			cout << "Enter new group: ";
			int nwgr;
			cin >> nwgr;
			c[idx].group = nwgr;
		}
		break;
		case 4:
		{
			return c;
		}
		break;
	}
	return c;
}
	







