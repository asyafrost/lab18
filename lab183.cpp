#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	setlocale(LC_ALL, "");
	cout << "Введите длину вашего массива : ";
	int n, k, min = 10000;

	cin >> n;
	vector <int> a(n);
	cout << "Введите " << n << " элементов массива A  : ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	int q = 1;
	
	for (int j = n - 1; j > 0; j--)
	{
		if (a[j] % 2 != 0)
		{
			q = a[j];
			break;
		}
	}
	for (int i = 0; i <= n - 1; i += 1) {
		if (a[i] % 2 != 0) {
			a[i] = q + a[i];
		}
		
	}
	for (auto now : a) {
		cout << now << endl;
	}
}
