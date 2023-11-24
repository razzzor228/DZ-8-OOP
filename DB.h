#pragma once
#include <iostream>
#include <list>
#include "Pishnyak.h"
#include "Pishnyak_1.h"
#include "Pishnyak_2.h"

using namespace std;

template<class T>
class DB :public list<T>
{
public:
	DB() {}
	~DB()
	{
		for (DB<Pishnyak*>::const_iterator it = this->begin(); it != this->end(); ++it)
		{
			delete (*it);
		}
		this->clear();
	}
	DB(const DB& obj)
	{
		for (DB<Pishnyak*>::const_iterator it = this->begin(); it != this->end(); ++it)
		{
			delete (*it);
		}
		this->clear();

		for (DB<Pishnyak*>::const_iterator it = obj.begin(); it != obj.end(); ++it)
		{
			this->push_back((*it)->Copy());
		}
	}
	DB& operator=(const DB& obj) = delete;
	void Change()
	{
		for (list <Pishnyak*>::iterator it = this->begin(); it != this->end(); it++)
		{
			(*it)->Change();
		}
	}
	void Print()
	{
		for (list <Pishnyak*>::iterator it = this->begin(); it != this->end(); it++)
		{
			(*it)->Print();
		}
	}
};

