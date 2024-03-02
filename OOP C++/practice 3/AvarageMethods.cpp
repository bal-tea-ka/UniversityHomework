#include <iostream>

using namespace std;

class AvarageMethods {
public:
	void Avarage() {};
	int Avarage(int a[5]) {
		int sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += a[i];
		} 
		return sum;
	};
	float Avarage(float a[5]) {
		float sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += a[i];
		}
		return sum;
	};
};

int main4() {
	
	setlocale(LC_ALL, "RUS");

	int b[5];
	for (int i = 0; i < 5; i++) {
		b[i] = i;
	};
	float c[5];
	float param = 1.25;
	for (int i = 0; i < 5; i++)
	{
		c[i] = param;
		param += i;
	}
	AvarageMethods a;
	cout << a.Avarage(b) << "; " << a.Avarage(c);

}