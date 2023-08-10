#include "s21_math.h"

long double s21_cos(double x) {
  long double a;
  if (x == s21_INF || x == -s21_INF) {
    a = -s21_NAN;
  } else {
    if (x < 0) {
      x = x * -1;
    }
    while (x >= 2 * s21_PI) {
      x = x - 2 * s21_PI;
    }
    x = s21_PI_2 - x;
    a = s21_sin(x);
  }
  return a;
}
