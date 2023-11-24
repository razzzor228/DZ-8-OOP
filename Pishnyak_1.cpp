#include "Pishnyak_1.h"

Pishnyak_1::Pishnyak_1()
{
	l = new list<float>;
	for (int i = 0; i < 2; i++)
	{
		l->push_back(3.14);
	}
}

Pishnyak_1::~Pishnyak_1()
{
	delete l;
}

Pishnyak_1::Pishnyak_1(const Pishnyak_1& obj) :Pishnyak(obj)
{
	l = new list<float>;
	for (list<float>::iterator it = obj.l->begin(); it != obj.l->end(); ++it)
	{
		l->push_back(*it);
	}
}

Pishnyak_1* Pishnyak_1::Copy()
{
	return new Pishnyak_1(*this);
}

void Pishnyak_1::Change()
{
	l->clear();
	delete l;
	l = new list<float>;
	for (int i = 0; i < 2; i++)
	{
		l->push_back(1.07);
	}
}

void Pishnyak_1::Print()
{
	for (list<float>::iterator it = l->begin(); it != l->end(); ++it)
	{
		cout << *it << endl;
	}
}
