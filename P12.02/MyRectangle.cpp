#include "MyRectangle.h"

bool MyRectangle::does_not_collide_with(const MyRectangle & other)
{
	if (this->x2 < other.x1 || this->x1 > other.x2 || this->y2 < other.y1 || this->y1 > other.y2)
		return true;
	else
		return false;
}