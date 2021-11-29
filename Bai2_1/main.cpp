#include"Rectangle.h"
#include"Square.h"
int main() {
	Rectangle a(3, 4);
	cout << a << endl;
	Square b(3);
	cout << b << endl;
	cout << "Canh cua hinh vuong la: " << b.getWidth() << endl;
	cout << "Canh cua hinh vuong la: " << b.getHeight() << endl;
	b.setHeight(4);
	cout << b << endl;
	b.setEdge(5);
	cout << b << endl;

	Rectangle a_1;
	cin >> a_1;
	cout << a_1 << endl;

	Square b_1;
	cin >> b_1;
	cout << b_1 << endl;
}