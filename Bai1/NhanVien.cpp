#include"NhanVien.h"
NhanVien::NhanVien() {
	this->hoten = "Ho ten";
	this->ngaysinh = Date();
	this->maso = "MSGV";
}
NhanVien::NhanVien(string hoten, Date ngaysinh, string maso) {
	this->hoten = hoten;
	this->ngaysinh = ngaysinh;
	this->maso = maso;
}

void NhanVien::input() {
	cout << "Nhap ho ten : ";
	getline(cin, this->hoten);
	cout << "Nhap ngay thang nam sinh: \n";
	cin >> this->ngaysinh;
	cout << "Nhap MS: ";
	getline(cin, this->maso);
}

void NhanVien::output() {
	cout << "Thong tin nhan vien: \n";
	cout << "Ho ten: " << this->hoten << endl;
	cout << "Ngay sinh: " << this->ngaysinh << endl;
	cout << "Ma so: " << this->maso << endl;
}
