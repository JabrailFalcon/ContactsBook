#include "framework.h"
#include "Book.h"

Book::Book()
{
}

Book::Book(std::string name, int size)
{
}

Book::~Book()
{
}

std::string Book::getName() const
{
	return std::string();
}

Group** Book::getGroup() const
{
	return nullptr;
}

int Book::getSize() const
{
	return 0;
}

int Book::getCount() const
{
	return 0;
}

void Book::addGroup(const Group& group)
{
}

void Book::delGroup(std::string name)
{
}

