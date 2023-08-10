#include "s21_math.h"

long double s21_sin(double x) {
  long double b;
  if (x == s21_INF || x == -s21_INF) {
    b = -s21_NAN;
  } else {
    long double minus = 1;
    if (x < 0) {
      minus = -1;
      x = x * -1;
    }
    while (x > s21_PI_2) {
      x = x - s21_PI;
      minus = minus * -1;
    }
    long double a = x;
    b = x;
    long double i = 1;
    while (s21_fabs(a) > s21_EPS) {
      a = -1 * a * x * x / (2 * i * (2 * i + 1));
      i = i + 1;
      b = b + a;
    }
    b = b * minus;
  }
  return b;
}
