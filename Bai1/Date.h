#pragma once
#include<iostream>
using namespace std;
class Date {
private:
	int ngay;
	int thang;
	int nam;
public:
	Date();
	Date(int, int, int);
	friend istream& operator>>(istream&, Date&);
	friend ostream& operator<<(ostream&, Date&);
};
