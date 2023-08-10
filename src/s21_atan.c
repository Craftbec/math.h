#include "s21_math.h"

long double s21_atan(double x) {
  long double b;
  if (x == s21_INF) {
    b = s21_PI_2;
  } else if (x == -s21_INF) {
    b = -s21_PI_2;
  } else {
    long double a, abs_x;
    int n = 1, flag = 0, minus = 0;
    if (x < 0) {
      minus = 1;
      x = x * -1;
    }
    if (x > 1) {
      x = 1 / x;
      flag = 1;
    }
    a = x;
    b = x;
    abs_x = x;
    if (x != 1) {
      while (abs_x > s21_EPS) {
        ++n;
        a = a * -x * x * (2 * n - 3) / (2 * n - 1);
        b = b + a;
        if (a < 0) {
          abs_x = abs_x * -a;
        } else {
          abs_x = a;
        }
      }
    } else {
      b = s21_PI_4;
    }
    if (flag == 1) {
      b = s21_PI_2 - b;
    }
    if (minus == 1) {
      b = b * -1;
    }
  }
  return b;
}
