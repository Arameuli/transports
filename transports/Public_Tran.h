#pragma once
#include"Transport.h"
class Public_Tran : public Transport
{
public:
	int place;
	Public_Tran();
	Public_Tran(int wheel, int length, int width, int hight, int place);
	void printPublic();
};

