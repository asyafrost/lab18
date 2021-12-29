#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	setlocale(LC_ALL,"ru");
	cout << "Введите длину вашего массива : ";
	int n, min = 10000, max = -10000;

	cin >> n;
	vector <int> a(n);
	cout << "Введите " << n << " элементов массива: ";
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];

	}
	int k, l;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] < min) {
			min = a[i];
			k = i;
		}
		if (a[i] > max) {
			max = a[i];
			l = i;
		}
	}
	if (k < l)
	{
		for (int i = k+1; i <= l ; i++) {
			a[i] = 0;
		}

	}
	if (l < k)
	{
		for (int i = l + 1; i <= k - 1; i++) {
			a[i] = 0;
		}

	}
			
	
	cout << "Элементы массива после преобразования : " << endl;
	for (auto now : a) {
		cout << now << endl;
	}
}

