#include"ChuyenVien.h"
ChuyenVien::ChuyenVien() :NhanVien() {
	this->soNamKN = 1;
	this->maDuAnHoanThanh.push_back("");
}
ChuyenVien::ChuyenVien(string hoten, Date ngaysinh, string maso, int soNamKN, vector<string> maDuAnHoanThanh):NhanVien(hoten,ngaysinh,maso) {
	this->soNamKN = soNamKN;
	this->maDuAnHoanThanh = maDuAnHoanThanh;
}
int ChuyenVien::tinhLuong() {
	int soDuAn_T = 0;
	for (int i = 0; i < this->maDuAnHoanThanh.size(); i++) {
		if (this->maDuAnHoanThanh[i][0] == 'T') {
			soDuAn_T++;
		}
	}
	return (this->soNamKN * 4 + soDuAn_T) * 18000;
}

void ChuyenVien::input() {
	NhanVien::input();
	cout << "Nhap so nam KN: ";
	cin >> this->soNamKN;
	cout << "Nhap so luong du an da hoan thanh: ";
	int n;
	cin >> n;
	cin.ignore();
	this->maDuAnHoanThanh.resize(n);
	cout << "Nhap ten cac du an dO: \n";
	for (int i = 0; i < n; i++) {
		getline(cin, this->maDuAnHoanThanh[i]);
	}
}

void ChuyenVien::output() {
	NhanVien::output();
	cout << "So nam kinh nghiem: " << this->soNamKN << endl;
	cout << "Ma cac du an da hoanh thanh: \n";
	for (int i = 0; i < this->maDuAnHoanThanh.size(); i++) {
		cout << "+ " << this->maDuAnHoanThanh[i] << endl;
	}
	cout << "Tien luong: " << this->tinhLuong() << endl;
}
