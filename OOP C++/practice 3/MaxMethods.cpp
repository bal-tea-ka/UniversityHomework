#include <iostream>

using namespace std;

class MaxMethods {
public:
	int Max(int a, int b) { return max(a, b); };
	int Max(int a, int b, int c) { return max(a, max(b, c)); };
	int Max(int a, int b, int c, int d) { return max(a, max(b, max(c, d))); };
};

int main3() {

	setlocale(LC_ALL, "RUS");

	MaxMethods a;
	cout << a.Max(1, 2, 3) << a.Max(3, 4, 5, 6) <<	a.Max(4, 3, 7, 5);
	return 0;
}