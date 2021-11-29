#include"Library.h"
Library::Library() {

}

istream& operator>>(istream& inDev, Library& a) {
	int n;
	cout << "Nhap so sach cua thu vien: ";
	inDev >> n;
	inDev.ignore();
	a.listBook.resize(n);
	for (int i = 0; i < n; i++) {
		inDev >> a.listBook[i];
	}
	return inDev;
}

ostream& operator<<(ostream& outDev, Library& a) {
	outDev << "DS cac sach cua thu vien la: \n";
	for (int i = 0; i < a.listBook.size(); i++) {
		outDev << " + " << a.listBook[i] << endl;
	}
	return outDev;
}

vector<Book> Library::timKiemTheoTenSach(string tenSach) {
	vector<Book> result;
	for (int i = 0; i < this->listBook.size(); i++) {
		if (this->listBook[i].getTenSach() == tenSach) {
			result.push_back(this->listBook[i]);
		}
	}
	return result;
}

vector<Book> Library::timKiemTheoTenTG(string tenTG) {
	vector<Book> result;
	for (int i = 0; i < this->listBook.size(); i++) {
		if (this->listBook[i].getTenTG() == tenTG) {
			result.push_back(this->listBook[i]);
		}
	}
	return result;
}

vector<Book> Library::timKiemTheoMaSo(string MS) {
	vector<Book> result;
	for (int i = 0; i < this->listBook.size(); i++) {
		if (this->listBook[i].getMS() == MS) {
			result.push_back(this->listBook[i]);
		}
	}
	return result;
}

void Library::addBook(Book a) {
	this->listBook.push_back(a);
}

void Library::delBook(string MS) {
	bool check = false;
	for (int i = 0; i < this->listBook.size(); i++) {
		if (this->listBook[i].getMS() == MS) {
			check = true;
			this->listBook.erase(this->listBook.begin() + i);
		}
	}
	if (!check) {
		cout << "Sach khong ton tai trong thu vien\n";
	}

}