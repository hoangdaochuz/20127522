#pragma once
#include<iostream>
#include<string>
#include"Date.h"
using namespace std;
class NhanVien {
private:
	string hoten;
	Date ngaysinh;
	string maso;
public:
	NhanVien();
	NhanVien(string, Date, string);
	void input();
	void output();
	virtual int  tinhLuong() = 0;
};