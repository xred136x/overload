// шаблон
#include<iostream>
using namespace std;
// встроенная функция

inline int sum(int num1, int num2) {
	return num1 + num2;
}

// т.к функцию невозможно встроить, то работает как обычная функция
inline int sum_AB(int A, int B) {
	int res = 0;
	for (int i = A; i <= B; i++)
		res += i;
	return res;
}

// перегруженные функции
int max_val(int num1, int num2) {
	cout << "INT\n";
	return num1 > num2 ? num1 : num2;
}
double max_val(double num1, double num2) {
	cout << "DOUBLE\n";
	return num1 > num2 ? num1 : num2;
}
float max_val(float num1, float num2) {
	cout << "FLOAT\n";
	return num1 > num2 ? num1 : num2;
}
int max_val(int num1, int num2, int num3) {
	cout << "THREE INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}

// шаблонные функции
template <typename T> 
T abs(T num) {
	return num < 0 ? -num : num;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// sum и sum_AB
	/*cout << "Введите два числа: ";
	cin >> n >> m;
	cout << sum_AB(n, m) << "\n";
	//cout << sum(n, m) << "\n";*/
	// max_val
	/*cout << max_val(4, 6) << "\n";
	cout << max_val(1.2, 1.1) << "\n";
	cout << max_val(5.5f, 5.9f) << "\n";
	cout << max_val(5, 7, 4) << '\n';*/
	// abs 
	cout << abs(-5) << '\n';
	cout << abs(7.4) << '\n';
	cout << abs(-1.1f) << '\n';
	return 0;
}