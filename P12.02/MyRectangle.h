#pragma once
#pragma once
#include "CImgGIP05.h"

class MyRectangle {
protected:
	int x1, x2, y1, y2;

public:
	MyRectangle(int x1, int y1, int x2, int y2) : x1{ x1 }, x2{ x2 }, y1{ y1 }, y2{ y2 } {}
	MyRectangle() : x1{ 0 }, x2{ 20 }, y1{ 0 }, y2{ 20 } {}
	MyRectangle operator * (double d) const {
		MyRectangle temp = *this;
		temp.x2 = this->x1 + (this->x2 - this->x1) * d;
		temp.y2 = this->y1 + (this->y2 - this->y1) * d;
		return temp;
	}
	int getx1() { return x1; }
	void setx1(int x1) { this->x1 = x1; }
	int getx2() { return x2; }
	void setx2(int x2) { this->x2 = x2; }
	int gety1() { return y1; }
	void sety1(int y1) { this->y1 = y1; }
	int gety2() { return y2; }
	void sety2(int y2) { this->y2 = y2; }
	int set(int x1, int x2, int y1, int y2) { this->x1 = x1; this->x2 = x2; this->y1 = y1; this->y2 = y2; }

	void draw() { gip_draw_rectangle(x1, y1, x2, y2, blue); }
	void draw_red() { gip_draw_rectangle(x1, y1, x2, y2, red); }
	bool does_not_collide_with(const MyRectangle& other);
};