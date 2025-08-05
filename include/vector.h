#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    float x;
    float y;
} Vector2D;

Vector2D vector_add(Vector2D a, Vector2D b);
Vector2D vector_scale(Vector2D v, float scalar);
float vector_dot(Vector2D a, Vector2D b);

#endif
