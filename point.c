#include "point.h"
#include <math.h>

float get_distance(Point pointA, Point pointB)
{
  int diff_X = pointA.x - pointB.x;
  int diff_Y = pointA.y - pointB.y;
  return hypot(diff_X, diff_Y);
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  float closest_distance = get_distance(food_points[0], current_location);
  *closest_food_location = food_points[0];
  FOR(1, points_length)
  {
    float distance = get_distance(food_points[i], current_location);
    if (distance < closest_distance)
    {
      closest_distance = distance;
      *closest_food_location = food_points[i];
    }
  }
}