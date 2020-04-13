#include "point.h"
#include <math.h>

unsigned int get_distance(struct Point pointA,struct Point pointB){
  int diff_X = pointA.x - pointB.x;
  int diff_Y = pointA.y - pointB.y;
  return hypot(diff_X,diff_Y);
}

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location)
{
  unsigned int closest_distance = get_distance(food_points[0],current_location);
  *closest_food_location = food_points[0];
  for (int i = 1; i < points_length; i++)
  {
    unsigned int distance = get_distance(food_points[i],current_location);
    if(distance < closest_distance){
      closest_distance = distance;
      *closest_food_location = food_points[i];
    }
  }
}