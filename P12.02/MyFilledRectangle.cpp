#include "MyFilledRectangle.h"
#include "CImgGIP05.h"

void MyFilledRectangle::draw()
{
	MyRectangle::draw();
	while ((y2 - y1) >= 2) {
		gip_draw_line(x1, y1, x2, y1, red);
		this->y1 = this->y1 + 2;
	}
}
