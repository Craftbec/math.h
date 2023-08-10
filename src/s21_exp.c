#include "s21_math.h"

long double s21_exp(double x) {
  long double a = 1;
  long double b = 1;
  long double i = 1;
  int minus = 0;
  if (x == s21_INF) {
    b = s21_INF;
  } else if (x == -s21_INF) {
    b = 0;
  } else if (is_nan(x)) {
    b = s21_NAN;
  } else if (x > 709) {
    b = s21_INF;
  } else if (x < -709) {
    b = 0;
  } else if (x == 0) {
    b = 1;
  } else if (x != 0) {
    if (x < 0) {
      x = x * -1;
      minus = 1;
    }
    if (x > 0) {
      for (; a >= s21_EPS; i++) {
        a = a * (x / i);
        b = b + a;
      }
    }
    if (minus) {
      b = 1 / b;
    }
  }
  return b;
}
