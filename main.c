#include <stdio.h>
#include "vector.h"

int main() {
  Vector2D a = {1.0, 2.0};
  Vector2D b = {3.0, 4.0};

  // Vector Addition
  Vector2D sum = vector_add(a, b);
  printf("a + b = (%.2f, %.2f)\n", sum.x, sum.y);

  // Vector Scaling
  float scale_factor = 2.0; //adjust the float value to your liking
  Vector2D_scale = vector_scale(a, scale_factor);
  printf("a*%.2f = (%.2f, %.2f)\n", scale_factor, scaled.x, scaled.y);

  // Dot product
  float dot = vector_dot(a, b);
  printf("a*b = %.2f\n", dot)
    
  return 0;
}
