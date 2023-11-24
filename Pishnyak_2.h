#pragma once
#include <iostream>
#include <list>
#include <vector>
#include "Pishnyak.h"
#include "Pishnyak_1.h"

using namespace std;

class Pishnyak_2 :public Pishnyak_1
{
	double* d;
	list <vector<int>*>* l;
	vector<int>* v1;
public:
	Pishnyak_2();
	~Pishnyak_2();
	Pishnyak_2(const Pishnyak_2& obj);
	virtual Pishnyak_2* Copy();
	void Change();
	void Print();

};