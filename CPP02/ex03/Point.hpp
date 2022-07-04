#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x, _y;
    public:
        Point();
        Point(const float& x, const float& y);   
        Point(const Point& pn);
        ~Point();

       Fixed    getX()  const;
       Fixed    getY()  const;
       Point&  operator=(Point const& rhs);
};

bool    bsp( Point const a, Point const b, Point const c, Point const point);
int   ft_sqr(Point const& p_1, Point const& p_2, Point const& p_3); 


#endif