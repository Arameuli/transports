#pragma once
#include"Transport.h"
class Private_Tran : public Transport
{
public:
	int inCity, OnTheHighway;
	Private_Tran();
	Private_Tran(int wheel, int length, int width, int hight, int inCity, int OnTheHighway);
	void printPrivate();
};

