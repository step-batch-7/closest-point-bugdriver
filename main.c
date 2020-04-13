#include <stdio.h>
#include "point.h"

int main(void)
{
  Point closest_food_location;
  Point food_points[] = {{18,76}, {19,66} ,{89,57}, {9,71}, {55,38}};
  Point current_location = {10 ,94};
  get_closest_food(food_points,sizeof(food_points)/sizeof(Point),current_location,&closest_food_location);
  printf("{%d,%d}",closest_food_location.x,closest_food_location.y);
  return 0;
}