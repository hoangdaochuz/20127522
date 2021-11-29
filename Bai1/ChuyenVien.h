#pragma once
#include"NhanVien.h"
#include<vector>
class ChuyenVien :public NhanVien {
private:
	int soNamKN;
	vector<string> maDuAnHoanThanh;
public:
	ChuyenVien();
	ChuyenVien(string hoten, Date ngaysinh, string maso, int soNamKN, vector<string>maDuAnHoanThanh);
	void input();
	void output();
	int tinhLuong();
};