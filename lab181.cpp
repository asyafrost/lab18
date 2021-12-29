#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину ваших массивов : ";
	int n, k, min = 10000;
	double q = 0, m = 0;
	cin >> n;
	vector <int> a(n);
	vector <int> b(n);
	cout << "Введите " << n << " элементов массива A  : ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	cout << "Введите " << n << " элементов массива B  : ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> b[i];
	}
	int j = 0, z = 0;
	for (j; j <= n - 1; j++) {
		swap(a[j], b[j]);
	}
	cout << "Элементы массива А : ";
	for (auto now : a) {
		cout << now << " ";
	}
	cout << endl;
	cout << "Элементы массива B : ";
	for (auto now : b) {
		cout << now << " ";
	}
	cout << endl;
}
