#include "vector.h"

Vector2D vector_add(Vector2D a, Vector2D b){
  return (Vector2D){a.x + b.x, a.y + b.y};
}

Vector2D vector_scale(Vector2D v, float scalar) {
  return (Vector2D){v.x * scalar, v.y * scalar};
}

float vector_dot(Vector2D a, Vector2D b) {
  return a.x * b.x + a.y * b.y;
}
