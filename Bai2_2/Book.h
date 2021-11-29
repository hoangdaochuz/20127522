#pragma once
#include<iostream>
#include<string>
using namespace std;
class Book {
private:
	string MS;
	string tenSach;
	string ten_TG;
	int giaSach;
	string vitri;  // Vị trí sách trong thư viện
public:
	Book();
	Book(string, string, string, int, string);
	string getTenSach();
	string getTenTG();
	string getVT();
	int getGiaSach();
	string getMS();
	friend istream& operator>>(istream&, Book&);
	friend ostream& operator<<(ostream&, Book&);
};