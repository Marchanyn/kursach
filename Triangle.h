#pragma once
class Triangle {
private:

	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
public:
	void setX1(int x1) {
		this->x1 = x1;
	}
	int getx1() {

		return x1;
	}
	void setX2(int x2) {
		this->x2 = x2;
	}
	int getx2() {
		return x2;
	}
	void setX3(int x3) {
		this->x3 = x3;
	}
	int getx3() {
		return x3;
	}
	int setY1() {
		return y1;
	}
	void getY1(int y1) {
		this->y1 = y1;
	}
	int setY2() {
		return y2;
	}
	void getY2(int y2) {
		this->y2 = y2;
	}
	int setY3() {
		return y3;
	}
	void getY3(int y3) {
		this->y3 = y3;
	}
};