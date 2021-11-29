#include"Truong.h"
Truong::Truong() {

}

void Truong::input() {
	int numGV;
	cout << "Nhap so luong giang vien cua truong: ";
	cin >>numGV;
	cin.ignore();
	this->gv.resize(numGV);
	cout << "Nhap thong tin cua tung giang vien: \n";
	for (int i = 0; i < numGV; i++) {
		cout << "Nhap thong tin giang vien thu "<<i+1<<": \n";
		gv[i].input();
	}

	int numTG;
	cout << "Nhap so luong tro giang cua truong: ";
	cin >>numTG;
	cin.ignore();
	this->tg.resize(numTG);
	cout << "Nhap thong tin cua tung tro giang: \n";
	for (int i = 0; i < numTG; i++) {
		cout << "Nhap thong tin tro giang thu " << i + 1 << ": \n";
		this->tg[i].input();
	}

	int numNCV;
	cout << "Nhap so luong nghien cuu vien cua truong: ";
	cin >> numNCV;
	cin.ignore();
	this->ncv.resize(numNCV);
	cout << "Nhap thong tin cua tung nghien cuu vien: \n";
	for (int i = 0; i < numNCV; i++) {
		cout << "Nhap thong tin nghien cuu vien thu " << i + 1 << ": \n";
		this->ncv[i].input();
	}

	int numCV;
	cout << "Nhap so luong chuyen vien cua truong: ";
	cin >> numCV;
	cin.ignore();
	this->cv.resize(numCV);
	cout << "Nhap thong tin cua tung chuyen vien: \n";
	for (int i = 0; i <numCV; i++) {
		cout << "Nhap thong tin chuyen vien thu " << i + 1 << ": \n";
		this->cv[i].input();
	}
}

void Truong::output() {
	cout << "\n-------DS CAC GIANG VIEN---------\n";
	for (int i = 0; i < this->gv.size(); i++) {
		this->gv[i].output();
		cout << endl;
	}
	cout << "-----------DS CAC TRO GIANG------------\n";
	for (int i = 0; i < this->tg.size(); i++) {
		this->tg[i].output();
		cout << endl;
	}
	cout << "------------DS CAC NGHIEN CUU VIEN-----------\n";
	for (int i = 0; i < this->ncv.size(); i++) {
		this->ncv[i].output();
		cout << endl;
	}
	cout << "-------------DS CAC CHUYEN VIEN---------------\n";
	for (int i = 0; i < this->cv.size(); i++) {
		this->cv[i].output();
		cout << endl;
	}

}

int Truong::tongLuongPhaiTra() {
	int sum = 0;
	for (int i = 0; i < this->gv.size(); i++) {
		sum += this->gv[i].tinhLuong();
	}
	for (int i = 0; i < this->tg.size(); i++) {
		sum += this->tg[i].tinhLuong();
	}
	for (int i = 0; i < this->ncv.size(); i++) {
		sum += this->ncv[i].tinhLuong();
	}
	for (int i = 0; i < this->cv.size(); i++) {
		sum += this->cv[i].tinhLuong();
	}
	return sum;
}