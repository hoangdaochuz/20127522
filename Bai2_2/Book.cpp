#include"Book.h"

Book::Book() {
	this->tenSach = "ten sach";
	this->ten_TG = "ten tg";
	this->giaSach = 0;
	this->vitri = "";
	this->MS = "";
}

Book::Book(string tenSach, string ten_TG, string vitri, int giaSach, string MS) {
	this->tenSach = tenSach;
	this->ten_TG = ten_TG;
	this->vitri = vitri;
	this->giaSach = giaSach;
	this->MS = MS;
}

string Book::getTenSach() {
	return this->tenSach;
}

string Book::getTenTG() {
	return this->ten_TG;
}

string Book::getVT() {
	return this->vitri;
}

int Book::getGiaSach() {
	return this->giaSach;
}
string Book::getMS() {
	return this->MS;
}
istream& operator>>(istream& inDev, Book& a) {
	cout << "Nhap ma so: ";
	getline(inDev, a.MS);
	cout << "Nhap ten sach: ";
	getline(inDev, a.tenSach);
	cout << "Nhap ten tac gia: ";
	getline(inDev, a.ten_TG);
	cout << "Nhap gia sach: ";
	inDev >> a.giaSach;
	inDev.ignore();
	cout << "Nhap vi tri: ";
	getline(inDev, a.vitri);
	return inDev;
}

ostream& operator<<(ostream& outDev, Book& a) {
	outDev << "MS sach: " << a.MS << endl;
	outDev << "Ten sach: " << a.tenSach << endl;
	outDev << "Ten TG: " << a.ten_TG << endl;
	outDev << "Gia: " << a.giaSach << endl;
	outDev << "Vi tri: " << a.vitri << endl;
	return outDev;
}