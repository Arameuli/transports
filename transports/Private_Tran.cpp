#include "Private_Tran.h"
#include<iostream>
using namespace std;
Private_Tran :: Private_Tran() {
}
Private_Tran :: Private_Tran(int wheel, int length, int width, int hight, int inCity, int OnTheHighway) {
	this->wheel = wheel;
	this->length = length;
	this->width = width;
	this->hight = hight;
	this->inCity = inCity;
	this->OnTheHighway = OnTheHighway;
}
void Private_Tran::printPrivate() {
	cout << wheel << " " << length << " " << width << " " << hight << " " << inCity << " " << OnTheHighway << endl;
}