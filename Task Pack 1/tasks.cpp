#include <iostream>
#include <cmath>
using namespace std;




// here are the tasks i completed
void task1() {
	int a, b;
	cin >> a >> b;
	cout << a - b;
}

 
void task2() {
	int a, b;
	cin >> a >> b;
	cout << (a + b) / 2;
}

 
void task3() {
	int R;
	cin >> R;
	const double pi = 3.14;
	double L = 2 * pi * R, S = pi * pow(R, 2);
	cout << "L = " << L << endl << "S = " << S;
}


void task4() {
	double a, b;
	cin >> a >> b;
	double c = sqrt(pow(a, 2) + pow(b, 2)),
		P = a + b + c;
	cout << "c = " << c << endl << "P = " << P;
	
}


void task5() {
	double x1, y1, x2, y2;
	cout << "Enter the coordinates (x1, y1, x2, y2)\n";
	cin >> x1 >> y1 >> x2 >> y2;
	double d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << "d = " << d;
}


void task6() {
	int A, B, C;
	cin >> A >> B >> C;
	cout << B << endl << C << endl << A;
}


void task7() {
	int bytes;
	cin >> bytes;
	int kb = bytes / 1024;
	cout << kb;
}


void task8() {
	int A, B;
	cin >> A >> B;
	if (A <= 0 or B <= 0 or A < B) {
		return;
	}
	cout << A % B;
}


void task9() {
	int X, A, Y, B;
	cin >> X >> A >> Y >> B;
	int price_chocolate = A / X, price_caramel = B / Y,
		price_difference = price_chocolate / price_caramel;
	cout << "Chocolate: " << price_chocolate << "\nCaramel: " << price_caramel
		<< "\nChocolate diff: " << price_difference;
}


void task10() {
	int num;
	cin >> num;
	if (num < 10 || num > 99) {        // or and || are the same
		return;
	}
	int first_digit = num / 10, second_digit = num % 10;
	int sum = first_digit + second_digit, product = first_digit * second_digit;
	cout << sum << endl << product;
}


void task11() {
	int num;
	cin >> num;
	if (num < 100 || num > 999) {
		return;
	}
	cout << num / 10 % 10;
}


void task12() {
	int num;
	cin >> num;
	if (num < 100 || num > 999) {
		return;
	}
	int first_digit = num / 100, second_digit = num / 10 % 10, third_digit = num % 10;
	cout << second_digit << first_digit << third_digit;
}


void task13() {
	int num;
	cin >> num;
	if (num < 999) {
		return;
	}
	cout << num / 10 % 10;
}


void task14() {
	int K;
	cin >> K;
	if (K >= 1 && K < 365) {
		cout << K % 7;
	}
}


void task15() {
	int K;
	cin >> K;
	if (K >= 1 && K < 365) {
		cout << K % 7 + 1;
	}
}


void task16() {
	int year;
	cin >> year;
	cout << year / 100 + 1;
}


void task17() {
	int N;
	cin >> N;
	if (N >= 0 && N < 86400) {
		cout << N / 3600;
	}
}


void task18() {
	int A, B, C, prod;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;
	cout << "C = ";
	cin >> C;
	cout << "prod = " << abs(C - A) * abs(B - C);
}


void task19() {
	int N;
	cin >> N;
	if (N >= 0 && N < 86400) {
		cout << N % 3600 / 60;
	}
}


void task20() {
	double R1, R2;
	const double pi = 3.14;
	cout << "R1 = ";
	cin >> R1;
	cout << "R2 = ";
	cin >> R2;
	if (R1 <= R2) {
		return;
	}
	double S1 = pi * pow(R1, 2), S2 = pi * pow(R2, 2), S3 = S1 - S2;
	cout << "S1 = " << S1 << endl << "S2 = " << S2 << endl << "S3 = " << S3;
}


void task21() {
	double x1, y1, x2, y2, x3, y3;
	cout << "Enter the coordinates (x1, y1, x2, y2, x3, y3)\n";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double a = sqrt(pow(x2 - x1, 2) + (pow(y2 - y1, 2))), b = sqrt(pow(x3 - x2, 2) + (pow(y3 - y2, 2))),
		c = sqrt(pow(x3 - x1, 2) + (pow(y3 - y1, 2)));
	double p = (a + b + c) / 2;
	cout << "P = " << a + b + c << endl << "S = " << sqrt(p * (p - a) * (p - b) * (p - c));
}


void task22() {
	double V1, V2, S, T;
	cout << "Enter V1, V2, S, T\n";
	cin >> V1 >> V2 >> S >> T;
	cout << "Final distance = " << S + (V1 * T) + (V2 * T);
}


void task23() {
	int K, N;
	cout << "K = ";
	cin >> K;
	cout << "N = ";
	cin >> N;
	if (K >= 1 && K <= 365 && N >= 1 && N <= 7) {
		cout << "Result = " << (K + N - 2) % 7 + 1;
	}
}






//run any of them here
//for example, task9
int main() {
	task9();
	return 0;
}