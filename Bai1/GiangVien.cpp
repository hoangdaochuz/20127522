#include"GiangVien.h"
GiangVien::GiangVien() :NhanVien() {
	this->hocham = "Chua co";
	this->hocvi = "Cu nhan";
	this->soNamGD = 1;
	this->monHocDangGD.push_back("");
}

GiangVien::GiangVien(string hoten, Date ngaysinh, string maso, string hocham, string hocvi, int soNamGD, vector<string> monHocDangGD) :NhanVien(hoten, ngaysinh, maso) {
	this->hocham = hocham;
	this->hocvi = hocvi;
	this->soNamGD = soNamGD;
	this->monHocDangGD = monHocDangGD;
}

int GiangVien::tinhLuong() {
	return (this->monHocDangGD.size() * this->soNamGD * 0.12) * 20000;
}

void GiangVien::input() {
	NhanVien::input();
	cout << "Nhap hoc ham: ";
	getline(cin, this->hocham);
	cout << "Nhap hoc vi: ";
	getline(cin, this->hocvi);
	cout << " Nhap so nam giang day: ";
	cin >> this->soNamGD;
	int n;
	cout << "Nhap so luong mon hoc dang giang day: ";
	cin >> n;
	cin.ignore();
	cout << "Nhap cac mon do: \n";
	this->monHocDangGD.resize(n);
	for (int i = 0; i < n; i++) {
		getline(cin, this->monHocDangGD[i]);
	}
}

void GiangVien::output() {
	NhanVien::output();
	cout << "Hoc vi: " << this->hocvi << endl;
	cout << "Hoc ham: " << this->hocham << endl;
	cout << "So nam giang day: " << this->soNamGD << endl;
	cout << "DS cac mon dang giang day: \n";
	for (int i = 0; i < this->monHocDangGD.size(); i++) {
		cout << "+ " << this->monHocDangGD[i] << endl;
	}
	cout << "Tien luong: " << this->tinhLuong() << endl;
}