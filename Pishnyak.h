#pragma once
#include <iostream>
#include <list>

using namespace std;

class Pishnyak
{
	list<string*>* l;
public:
	Pishnyak();
	virtual ~Pishnyak();
	Pishnyak(const Pishnyak& obj);
	virtual Pishnyak* Copy();
	virtual void Change();
	virtual void Print();
};

