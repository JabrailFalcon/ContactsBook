#include "framework.h"
#include "Group.h"

Group::Group()
{
}

Group::Group(std::string name, int size)
{
}

Group::~Group()
{
}

std::string Group::getName() const
{
	return std::string();
}

Contact* Group::getContacts() const
{
	return nullptr;
}

int Group::getSize() const
{
	return 0;
}

int Group::getCount() const
{
	return 0;
}

void Group::addContact(const Contact& contact)
{
}

void Group::delContact(std::string name)
{
}
