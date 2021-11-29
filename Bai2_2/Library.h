#pragma once
#include"Book.h"
#include<vector>
class Library {
private:
	vector<Book> listBook;
public:
	Library();
	friend istream& operator>>(istream&, Library&);
	friend ostream& operator<<(ostream&, Library&);
	vector<Book> timKiemTheoTenSach(string);
	vector<Book> timKiemTheoTenTG(string);
	vector<Book> timKiemTheoMaSo(string);
	void addBook(Book);
	void delBook(string);
};
