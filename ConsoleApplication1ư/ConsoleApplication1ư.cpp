#include <iostream>
using namespace std;
int main() {
	int sodau, socuoi;
	cout << "Nhap so dau:";
	cin >> sodau;
	cout << "Nhap so cuoi:";
	cin >> socuoi;
	cout << "VONG LAP WHILE\n";
}
	while (sodau <= socuoi) {
		cout << sodau << "  ";
		sodau++;
		cout << "\nVONG LAP DO WHILE\n";
		{ 
			cout << sodau << " ";
		} while (sodau <= socuoi);
		return 0;

}