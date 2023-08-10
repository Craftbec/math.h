#include "s21_math.h"

long double s21_sqrt(double x) {
  long double a = 5, b = 0;

  if (x < 0) {
    a = s21_NAN;
  } else {
    while (s21_fabs(a - b) > s21_EPS) {
      b = a;
      a = (b + x / b) / 2;
    }
  }
  if (x == s21_INF) {
    a = s21_INF;
  }
  return a;
}
