#pragma once
#include"NhanVien.h"
#include"GiangVien.h"
#include"TroGiang.h"
#include"NghienCuuVien.h"
#include"ChuyenVien.h"
#include<vector>
class Truong {
private:
	vector<GiangVien> gv;
	vector<TroGiang> tg;
	vector<NghienCuuVien> ncv;
	vector<ChuyenVien> cv;
public:
	Truong();
	void input();
	void output();
	int tongLuongPhaiTra();
};