#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const float pi = 245850922 / 78256779;
const float e = 2.718281828;

inline double add(double x, double y);
inline double subtract(double x, double y);
inline double multiply(double x, double y);
inline double divide(double x, double y);
double power(double x, int y);
double root(double x, int y);

int main(void) {


	return 0;
}

inline double add(double x, double y) { return x + y; }

inline double subtract(double x, double y) { return x - y; }

inline double multiply(double x, double y) { return x * y; }

inline double divide(double x, double y) { return x / y; }

double power(double x, int y) {
	double temp = x;
	for (int i = 1; i < y; i++)
		temp *= x;

	return temp;
}

double root(double x, int y) {
	return pow(x, divide(1,y));
}