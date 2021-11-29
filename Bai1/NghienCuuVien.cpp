#include"NghienCuuVien.h"
NghienCuuVien::NghienCuuVien() :NhanVien() {
	this->soNamNghienCuu = 1;
	this->maDuAnDangNghienCuu.push_back("");
}
NghienCuuVien::NghienCuuVien(string hoten, Date ngaysinh, string maso, int soNamNghienCuu, vector<string> maDuAnDangNghienCuu) : NhanVien(hoten, ngaysinh, maso) {
	this->soNamNghienCuu = soNamNghienCuu;
	this->maDuAnDangNghienCuu = maDuAnDangNghienCuu;
}
int NghienCuuVien::tinhLuong() {
	int soDuAn_D = 0;
	for (int i = 0; i < this->maDuAnDangNghienCuu.size(); i++) {
		if (this->maDuAnDangNghienCuu[i][0] == 'D') {
			soDuAn_D++;
		}
	}
	return (this->soNamNghienCuu * 2 + soDuAn_D) * 20000;
}

void NghienCuuVien::input() {
	NhanVien::input();
	cout << "Nhap so nam nghien cuu: \n";
	cin >> this->soNamNghienCuu;
	cout << "Nhap SL cac du an dang nghien cuu: \n";
	int n;
	cin >> n;
	cin.ignore();
	cout << "Nhap ten cac du an do: \n";
	this->maDuAnDangNghienCuu.resize(n);
	for (int i = 0; i < n; i++) {
		getline(cin, this->maDuAnDangNghienCuu[i]);
	}

}

void NghienCuuVien::output() {
	NhanVien::output();
	cout << "So nam nghien cuu: " << this->soNamNghienCuu << endl;
	cout << "Cac du an dang nghien cuu : \n";
	for (int i = 0; i < this->maDuAnDangNghienCuu.size(); i++) {
		cout << "+ " << this->maDuAnDangNghienCuu[i] << endl;
	}
	cout << "Tien luong: " << this->tinhLuong() << endl;
}