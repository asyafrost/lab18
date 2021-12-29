#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину вашего массива : ";
	int n, k, min = 10000;
	double q = 0, m = 0;
	cin >> n;
	vector <int> a(n);
	vector <double> b(n);
	cout << "Введите " << n << " элементов массива A  : ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= n - 1; i++) {
		q = 0;
		for (int j = 0; j <= i; j++) {
			q += a[j];
		}
		b[i] = q / (i + 1);
		cout << i + 1 << ". " << b[i] << endl;
	}
}
