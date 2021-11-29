#include"TroGiang.h"
TroGiang::TroGiang():NhanVien() {
	this->soMonTroGiang = 1;
}

TroGiang::TroGiang(string hoten, Date ngaysinh, string maso, int soMonTroGiang) : NhanVien(hoten, ngaysinh, maso) {
	this->soMonTroGiang = soMonTroGiang;
}

int TroGiang::tinhLuong() {
	return (this->soMonTroGiang * 0.3) * 18000;
}

void TroGiang::input() {
	NhanVien::input();
	cout << "Nhap so mon tro giang: ";
	cin >> this->soMonTroGiang;
	cin.ignore();
}

void TroGiang::output() {
	NhanVien::output();
	cout << "So mon tro giang: " << this->soMonTroGiang << endl;
	cout << "Tien luong: " << this->tinhLuong() << endl;
}