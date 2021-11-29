#pragma once
#include"NhanVien.h"
#include<vector>
class GiangVien :public NhanVien {
private:
	string hocham;
	string hocvi;
	int soNamGD;
	vector<string> monHocDangGD;
public:
	GiangVien();
	GiangVien(string,Date,string,string, string, int, vector<string>);
	void input();
	void output();
	int tinhLuong();
};