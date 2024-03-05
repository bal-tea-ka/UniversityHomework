#include <iostream>

using namespace std;

class Sports {
protected:
	void play() {};
};

class Football :public Sports {
	void play() { cout << "you gonna play footbal"; };
};

class Basketball :public Sports {
	void play() { cout << "you gonna play basketball"; };
};

class Rugby :public Sports {
	void play() { cout << "you gonna play rugby"; };
};