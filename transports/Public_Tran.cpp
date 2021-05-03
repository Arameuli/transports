#include "Public_Tran.h"
#include<iostream>
using namespace std;
Public_Tran :: Public_Tran() {
}
Public_Tran :: Public_Tran(int wheel, int length, int width, int hight, int place) {
	this->wheel = wheel;
	this->length = length;
	this->width = width;
	this->hight = hight;
	this->place = place;
}
void Public_Tran :: printPublic() {
	cout << wheel << " " << length << " " << width << " " << hight << " " << place << endl;
}