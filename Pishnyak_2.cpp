#include "Pishnyak_2.h"

Pishnyak_2::Pishnyak_2()
{
	d = new double(0.67);
	for (int i = 0; i < 1; i++)
	{
		l = new list<vector<int>*>;
		for (int j = 0; j < 1; j++)
		{
			v1 = new vector<int>;
			v1->push_back(10);
		}
		l->push_back(v1);
	}
}

Pishnyak_2::~Pishnyak_2()
{
	delete d;
	for (list<vector<int>*>::iterator it = l->begin(); it != l->end(); ++it) {
		for (int j = 0; j < v1->size(); j++) {
			delete v1;
		}
	}
	delete l;
}

Pishnyak_2::Pishnyak_2(const Pishnyak_2& obj) :Pishnyak_1(obj)
{
	d = new double; *d = *obj.d;
	l = new list<vector<int>*>;
	for (list<vector<int>*>::iterator it = obj.l->begin(); it != obj.l->end(); ++it)
	{
		vector<int>* v2 = new vector<int>;
		v1 = new vector<int>;
		for (int k = 0; k < obj.v1->size(); k++)v1->push_back((*obj.v1)[k]);
		l->push_back(v1);
	}
}

Pishnyak_2* Pishnyak_2::Copy() = delete;

//Pishnyak_2* Pishnyak_2::Copy()
//{
//	return new Pishnyak_2(*this);
//}

void Pishnyak_2::Change()
{
	delete d; d = new double(8.888);
	for(list<vector<int>*>::iterator it = l->begin(); it != l->end(); ++it)
	{
		for (int j = 0; j < v1->size(); j++)
		{
			(*v1)[j] = 20;
		}
	}
}

void Pishnyak_2::Print()
{
	cout << *d << endl;
	for (list<vector<int>*>::iterator it = l->begin(); it != l->end(); ++it) {
		for (int j = 0; j < v1->size(); j++) {
			cout << (*v1)[j] << endl;
		}
	}
}
