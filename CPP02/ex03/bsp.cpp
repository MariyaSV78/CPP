#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    
      if ((ft_sqr(a, b, point) == ft_sqr(b, c, point)) && (ft_sqr(c, a, point) == ft_sqr(b, c, point)) && (ft_sqr(c, a, point) == ft_sqr(a, b, point)))
            return true;
      else
            return false;
}


int       ft_sqr(Point const& p_1, Point const& p_2, Point const& p_0)
{
      Fixed x1 = p_1.getX();
      Fixed y1 = p_1.getY();
      Fixed x2 = p_2.getX();
      Fixed y2 = p_2.getY();
      Fixed x0 = p_0.getX();
      Fixed y0 = p_0.getY();


std::cout << x1 << " " << y1 << std::endl;
std::cout << x2 << " " << y2 << std::endl;
std::cout << x0 << " " << y0 << std::endl;
std::cout << ((x1-x0)*(y2-y1)-(x2-x1)*(y1-y0)) << std::endl;


      if (((x1-x0)*(y2-y1)-(x2-x1)*(y1-y0)) < 0) 
      {
            std::cout << "return -1" << std::endl;
            return -1;
      }
      else if (((x1-x0)*(y2-y1)-(x2-x1)*(y1-y0)) == 0) 
      {
            std::cout << "return 0" << std::endl;
            return 0;
      }
      else
            return 1;
}
}
