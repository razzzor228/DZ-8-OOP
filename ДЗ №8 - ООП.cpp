#include<iostream>
#include<string>
#include<list>
#include "DB.h"
#include "Pishnyak.h"
#include "Pishnyak_1.h"
#include "Pishnyak_2.h"

using namespace std;

struct Leaks
{
	~Leaks() { _CrtDumpMemoryLeaks(); }
}_l;

int main()
{
	DB <Pishnyak*> db1;
	db1.push_back(new Pishnyak());
	db1.push_back(new Pishnyak_1());
	db1.push_back(new Pishnyak_2());
	db1.Print();
	db1.Change();
	cout << "-------------Changed db1---------------" << endl;
	db1.Print();
	DB <Pishnyak*> db2 = db1;
	db1 = db2;
	cout << "-------------db2---------------" << endl;
	db2.Print();
	return 0;
}