#pragma once
#include"NhanVien.h"
class TroGiang :public NhanVien {
private:
	int soMonTroGiang;
public:
	TroGiang();
	TroGiang(string, Date, string, int);
	void input();
	void output();
	int tinhLuong();
};