#include"Library.h"

int main() {
	Library KHTN;
	cout << "Nhap DS sach ban dau: \n";
	cin >> KHTN;

	cout << KHTN;

	cout << "Nhap ten sach can tim kiem: ";
	string tenSach;
	getline(cin, tenSach);
	vector<Book> res = KHTN.timKiemTheoTenSach(tenSach);
	if (res.size() == 0) {
		cout << "Sach khong ton tai trong thu vien!\n";
	}
	else {
		cout << "Ket qua tim kiem: \n";
		for (int i = 0; i < res.size(); i++) {
			cout << res[i] << endl;
		}
	}

	Book a;
	cout << "Nhap ten sach can them vao thu vien: \n";
	cin >> a;
	KHTN.addBook(a);
	cout << "DS sach cua thu vien sau khi them: \n";
	cout << KHTN << endl;

	cout << "Nhap MS sach muon xoa khoi thu vien: ";
	string MS;
	getline(cin, MS);
	KHTN.delBook(MS);
	cout << "DS sach sau khi xoa la: \n";
	cout << KHTN << endl;
}
