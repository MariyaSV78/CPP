#include "Point.hpp"

Point::Point(): _x(0), _y(0){}

Point::Point(const float& x, const float& y)
{
    _x = Fixed(x);
    _y = Fixed(y);
}

Point::Point(const Point& pn)
{
    *this = pn;
}

Point::~Point(){}

Point&  Point::operator=(Point const& pn)
{
	_x = pn.getX();
    _y = pn.getY();
	return *this;
}


Fixed  Point::getX() const
{
    return _x;
}

Fixed  Point::getY() const
{
    return _y;
}