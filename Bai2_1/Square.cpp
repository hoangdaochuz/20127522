#include"Square.h"
Square::Square() {
	this->width = this->height = 1;
}

Square::Square(int edge): Rectangle(edge,edge) {
	
}

istream& operator>>(istream& inDev, Square& a) {
	cout << "Nhap canh: ";
	inDev >> a.height;
	a.width = a.height;
	return inDev;
}

ostream& operator<<(ostream& outDev, Square& a) {
	outDev << "Canh: " << a.height << endl;
	cout << "Dien tich: " << a.Area() << endl;
	cout << "Chu vi: " << a.Perimeter() << endl;
	return outDev;
}
void Square::setWidth(int width) {
	Rectangle::setWidth(width);
	this->height = this->width;
}

void Square::setHeight(int height) {
	Rectangle::setHeight(height);
	this->width = this->height;
}

void Square::setEdge(int edge) {
	if (edge > 0) {
		this->width = this->height = edge;
	}
	else {
		cout << "SET CANH KHONG THANH CONG\n";
	}
}