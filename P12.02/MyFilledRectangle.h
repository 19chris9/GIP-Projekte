#pragma once
#include "MyRectangle.h"
#include "CImgGIP05.h"

class MyFilledRectangle : public MyRectangle {
public:
	MyFilledRectangle() : MyRectangle() {}
	MyFilledRectangle(int x1, int y1, int x2, int y2) : MyRectangle(x1, y1, x2, y2) {}

	void draw();
};