#pragma once
#include <cstring>
#include <cstdio>

class car {
protected:
	int speed;
	char name[40];

public:
	int gear;
	car(){}
	~car(){}
	car(int s, const char* n, int g)
		: speed(s), gear(g) {

		strcpy_s(name, n);
	}
	void changegear(int g = 4) {
		gear = g;
	}
	void speedup() {
		speed += 5;
	}
	void display() {
		printf("[%s]: ���=%d�� �ӵ�=%dkmph\n", name, gear, speed);
	}
	void whereAmI() { printf("��ü �ּ� = %x\n", this); }
};

	/**/