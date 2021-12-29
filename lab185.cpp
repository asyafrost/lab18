#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину массива размера N, все элементы которого, кроме первого, упорядочены по возрастанию: ";
	int n, k, min = 10000, max = -10000;

	cin >> n;
	vector <int> a(n);
	cout << "Введите " << n << " элементов массива A  : ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	int q = a[0];
	for (int i = 1; i <= n - 1; i++) {
		if (q > a[i - 1] && q < a[i]) {
			cout << "1) " << a[0] << endl;
			cout << i + 1 << ") " << a[i] << endl;
		}
		else {
			cout << i + 1 << ". " << a[i] << endl;
		}
	}
}

