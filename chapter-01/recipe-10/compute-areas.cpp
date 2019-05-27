#include "geometry_circle.hpp"
#include "geometry_polygon.hpp"
#include "geometry_rhombus.hpp"
#include "geometry_square.hpp"

#include<cstdlib>
#include<iostream>


int main(){
  using namespace geometry;

  double radius = 2.5293;
  double A_circle = area::circle(radius);

  std::cout << "A cirle of radius " << radius
	    << " has an area of " << A_circle
	    << std::endl;

  int nSides = 19;
  double side = 1.29321;
  double a_polygon = area::polygon(nSides, side);
  std::cout << "A regular polygon of " << nSides
	    << "sides of length " << side
	    << " has an area of " << a_polygon
	    << std::endl;

  double d1 = 5.0;
  double d2 = 7.8912;
  double a_rhombus = area::rhombus(d1, d2);
  std::cout << "A rhombus of major diagonal " << d1
	    << " and minor digonal " << d2
	    << " has an area of " << a_rhombus
	    << std::endl;

  double l = 10.0;
  double a_square = area::square(l);
  std::cout << "A square of side " << l
	    << " has an area of " << a_square
	    << std::endl;

  return EXIT_SUCCESS;
}
