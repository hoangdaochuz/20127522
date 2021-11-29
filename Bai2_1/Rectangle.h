#pragma once
#include<iostream>
using namespace std;
class Rectangle {
protected:
	int width;
	int height;
public:
	Rectangle();
	Rectangle(int, int);
	friend istream& operator>>(istream&, Rectangle&);
	friend ostream& operator<<(ostream&, Rectangle&);
	int getWidth();
	int getHeight();
	void setWidth(int);
	void setHeight(int);
	int Area();
	int Perimeter();
};
