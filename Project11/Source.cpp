#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Ukrainian");
	char x;
	cout << "Ведіть спосіб дії який хочете виконати над числом +,-,*,/,p(перевід)";
	cin >> x;
	switch (x) {

	case '+':int n;
		int base_in;
		int base_out;
		int m;
		cout << "Ведіть число яке хочете перевести = ";
		cin >> n;
		cout << "Ведіть початкову систему числення = ";
		cin >> base_in;
		cout << "Ведіть систему числення в яку хочете перевести =";
		cin >> base_out;
		cout << "Ведіть друге число = ";
		cin >> m;
		int t = 0, out_dec = 0;
		for (int n_val = n; n_val >= 1; n_val /= 10) {
			out_dec += (n_val % 10) * int(pow(base_in, t++));
		}
		int q = 0, out_t = 0;
		for (int n_val_t = out_dec; n_val_t >= 1; n_val_t /= base_out) {
			out_t += (n_val_t %base_out) * int(pow(10.0, q++));
		}
		cout << "n= " << n << ")" << base_in << ")" << "=>" << out_t << "(" << base_out << ")" << endl;
		cout << "Результат =" << out_t + m << endl;
	}
	switch (x) {

	case '-':int n;
		int base_in;
		int base_out;
		int m;
		cout << "Ведіть число яке хочете перевести = ";
		cin >> n;
		cout << "Ведіть початкову систему числення = ";
		cin >> base_in;
		cout << "Ведіть систему числення в яку хочете перевести =";
		cin >> base_out;
		cout << "Ведіть друге число = ";
		cin >> m;
		int t = 0, out_dec = 0;
		for (int n_val = n; n_val >= 1; n_val /= 10) {
			out_dec += (n_val % 10) * int(pow(base_in, t++));
		}
		int q = 0, out_t = 0;
		for (int n_val_t = out_dec; n_val_t >= 1; n_val_t /= base_out) {
			out_t += (n_val_t %base_out) * int(pow(10.0, q++));
		}
		cout << "n= " << n << ")" << base_in << ")" << "=>" << out_t << "(" << base_out << ")" << endl;
		if (out_t > m) {
			cout << "Результат =" << out_t - m << endl;
		}
		if (out_t < m) {
			cout << "Результат = " << m - out_t << endl;
		}
	}
	switch (x) {

	case '*':int n;
		int base_in;
		int base_out;
		int m;
		cout << "Ведіть число яке хочете перевести = ";
		cin >> n;
		cout << "Ведіть початкову систему числення = ";
		cin >> base_in;
		cout << "Ведіть систему числення в яку хочете перевести =";
		cin >> base_out;
		cout << "Ведіть друге число = ";
		cin >> m;
		int t = 0, out_dec = 0;
		for (int n_val = n; n_val >= 1; n_val /= 10) {
			out_dec += (n_val % 10) * int(pow(base_in, t++));
		}
		int q = 0, out_t = 0;
		for (int n_val_t = out_dec; n_val_t >= 1; n_val_t /= base_out) {
			out_t += (n_val_t %base_out) * int(pow(10.0, q++));
		}
		cout << "n= " << n << ")" << base_in << ")" << "=>" << out_t << "(" << base_out << ")" << endl;
		cout << "Результат =" << out_t * m << endl;
	}
	switch (x) {

	case '/':int n;
		int base_in;
		int base_out;
		int m;
		cout << "Ведіть число яке хочете перевести = ";
		cin >> n;
		cout << "Ведіть початкову систему числення = ";
		cin >> base_in;
		cout << "Ведіть систему числення в яку хочете перевести =";
		cin >> base_out;
		cout << "Ведіть друге число = ";
		cin >> m;
		int t = 0, out_dec = 0;
		for (int n_val = n; n_val >= 1; n_val /= 10) {
			out_dec += (n_val % 10) * int(pow(base_in, t++));
		}
		int q = 0;
		double out_t = 0;
		for (int n_val_t = out_dec; n_val_t >= 1; n_val_t /= base_out) {
			out_t += (n_val_t %base_out) * int(pow(10.0, q++));
		}
		cout << "n= " << n << ")" << base_in << ")" << "=>" << out_t << "(" << base_out << ")" << endl;
		if (out_t > m) {
			cout << "Результат =" << out_t / m << endl;
		}
		if (out_t < m) {
			cout << "Результат =" << m / out_t * 1. << endl;
		}
	}
	switch (x) {

	case 'p':int n;
		int base_in;
		int base_out;
		int m;
		cout << "Ведіть число яке хочете перевести = ";
		cin >> n;
		cout << "Ведіть початкову систему числення = ";
		cin >> base_in;
		cout << "Ведіть систему числення в яку хочете перевести =";
		cin >> base_out;
		int t = 0, out_dec = 0;
		for (int n_val = n; n_val >= 1; n_val /= 10) {
			out_dec += (n_val % 10) * int(pow(base_in, t++));
		}
		int q = 0, out_t = 0;
		for (int n_val_t = out_dec; n_val_t >= 1; n_val_t /= base_out) {
			out_t += (n_val_t %base_out) * int(pow(10.0, q++));
		}
		cout << "n= " << n << ")" << base_in << ")" << "=>" << out_t << "(" << base_out << ")" << endl;

	}
	system("pause");

}