#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> ch;
	switch (phepToan)
	{
	case '+':
		cout<<"tong = "<<tong(a,b);
		break;
	case '-':
		cout<<"hieu= "<<hieu(a,b);
		break;
	case '*':
		cout<<"Tich = "<<tich(a,b);
		break;
	case '/':

		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}