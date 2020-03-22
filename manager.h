#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <vector>
#include <cstring>

enum Groups
{
	NO_GROUP,
	FAMILY,
	FRIENDS,
	COLLEAGUES,
};
struct Contact
{
	std::string name;
	std::string phone;
	int group;
	Contact(const std::string& _n, const std::string& _p, int& _g) : name(_n), phone(_p), group(_g) {};
	
};

std::vector<Contact>& createContact(std::vector<Contact> &c);
std::vector<Contact>& deleteContact(std::vector<Contact> &c);
std::vector<Contact>& editContact(std::vector<Contact> &c);

#endif
