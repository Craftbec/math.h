#include "s21_math.h"

long double s21_fmod(double x, double y) {
  int er = 1;
  int min = 0;
  long double a = x;

  if (y == 0) {
    er = 0;
    a = s21_NAN;
  } else if (x == s21_INF) {
    a = s21_NAN;
  } else if (y != (double)y) {
    a = s21_NAN;
  } else {
    if (x < 0) {
      x = x * -1;
      min = 1;
    }
    if (y < 0) {
      y = y * -1;
    }
    if (er) {
      while (x >= y) {
        x = x - y;
      }
      if (min) {
        x = x * -1;
      }
      a = (long double)x;
    }
  }

  return a;
}
