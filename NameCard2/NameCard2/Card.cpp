#include <iostream>
#include "Card.h"

NameCard::NameCard(string _Name, string _NumBer, string _Address, string _Rank)
{
	M_Card = new NameCard; //�����Ҵ�
	Name = _Name;
	NumBer = _NumBer;
	Address = _Address;
	Rank = _Rank;
}

void NameCard::Info()
{
	using namespace std;
	cout <<"�̸� : "<<Name << endl;
	cout <<"��ȣ : "<<NumBer<< endl;
	cout <<"�ּ� : "<<Address<<endl;
	cout <<"���� : "<<Rank<<endl;
}