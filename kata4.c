// Point objects have x and y attributes
// Write a function calculating distance between Point a and Point b

#include <stdio.h>
#include <math.h>

typedef struct Point {
    double x;
    double y;
} point;

double distance_between_points(point a, point b) {
  double x = b.x - a.x;
  double y = b.y - a.y;
  double res = sqrt(x * x + y * y);
  return res;
}
