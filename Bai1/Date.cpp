#include"Date.h"
Date::Date() {
	this->ngay = 1;
	this->thang = 1;
	this->nam = 2000;
}

Date::Date(int ngay, int thang, int nam) {
	this->ngay = ngay;
	this->thang = thang;
	this->nam = nam;
}

istream& operator>>(istream& inDev, Date& a) {
	cout << "Nhap ngay: ";
	inDev >> a.ngay;
	cout << "Nhap thang: ";
	inDev >> a.thang;
	cout << "Nhap nam: ";
	inDev >> a.nam;
	inDev.ignore();
	return inDev;
}

ostream& operator<<(ostream& outDev, Date& a) {
	outDev << a.ngay << "/" << a.thang << "/" << a.nam << endl;
	return outDev;
}