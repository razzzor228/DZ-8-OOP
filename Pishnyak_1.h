#pragma once
#include <iostream>
#include <list>
#include "Pishnyak.h"

using namespace std;

class Pishnyak_1 :public Pishnyak
{
	list<float>* l;
public:
	Pishnyak_1();
	~Pishnyak_1();
	Pishnyak_1(const Pishnyak_1& obj);
	virtual Pishnyak_1* Copy();
	void Change();
	void Print();
};
