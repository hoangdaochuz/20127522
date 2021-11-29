#pragma once
#include"Rectangle.h"
class Square :public Rectangle {
private:
public:
	Square();
	Square(int);
	friend istream& operator>>(istream&, Square&);
	friend ostream& operator<<(ostream&, Square&);
	void setWidth(int);
	void setHeight(int);
	void setEdge(int);
};
