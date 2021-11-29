#pragma once
#include"NhanVien.h"
#include<vector>
class NghienCuuVien :public NhanVien {
private:
	int soNamNghienCuu;
	vector<string> maDuAnDangNghienCuu;
public:
	NghienCuuVien();
	NghienCuuVien(string, Date, string, int, vector<string>);
	void input();
	void output();
	int tinhLuong();
};
