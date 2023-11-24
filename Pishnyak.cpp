#include "Pishnyak.h"

Pishnyak::Pishnyak()
{
	l = new list<string*>;
	for (int i = 0; i < 6; i++)
	{
		l->push_back(new string("AVTOMAT"));
	}
}

Pishnyak::~Pishnyak()
{
	for (list<string*>::iterator it = l->begin(); it != l->end(); ++it)
	{
		delete (*it);
	}
	delete l;
}

Pishnyak::Pishnyak(const Pishnyak& obj)
{
	l = new list<string*>;
	for (list<string*>::iterator it = obj.l->begin(); it != obj.l->end(); ++it)
	{
		l->push_back(new string(*(*it)));
	}
}

Pishnyak* Pishnyak::Copy()
{
	return new Pishnyak(*this);
}

void Pishnyak::Change()
{
	for (list<string*>::iterator it = l->begin(); it != l->end(); ++it)
	{
		delete (*it);
	}
	delete l;
	l = new list<string*>;
	l->push_back(new string("aoaoa"));
}

void Pishnyak::Print()
{
	for (list<string*>::iterator it = l->begin(); it != l->end(); ++it)
	{
		cout << *(*it) << endl;
	}
}
