#include"Rectangle.h"

Rectangle::Rectangle() {
	this->width = 1;
	this->height = 1;
}

Rectangle::Rectangle(int width, int height) {
	this->width = width;
	this->height = height;
}

int Rectangle::getWidth() {
	return this->width;
}

int Rectangle::getHeight() {
	return this->height;
}

void Rectangle::setWidth(int width) {
	if (width > 0) {
		this->width = width;
	}
	else {
		cout << "SET WIDTH KHONG THANH CONG\n";
	}
}

void Rectangle::setHeight(int height) {
	if (height > 0) {
		this->height = height;
	}
	else {
		cout << "SET HEIGHT KHONG THANH CONG\n";
	}
}

int Rectangle::Area() {
	return this->width * this->height;
}

int Rectangle::Perimeter() {
	return (this->width + this->height) * 2;
}

istream& operator>>(istream& inDev, Rectangle& a) {
	cout << "Nhap chieu dai: ";
	inDev >> a.width;
	cout << "Nhap chieu rong: ";
	inDev >> a.height;
	return inDev;
}

ostream& operator<<(ostream& outDev, Rectangle& a) {
	cout << "Chieu dai: " << a.width << endl;
	cout << "Chieu rong: " << a.height << endl;
	cout << "Dien tich: " << a.Area() << endl;
	cout << "Chu vi: " << a.Perimeter() << endl;
	return outDev;
}