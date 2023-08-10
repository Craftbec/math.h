#include "s21_math.h"

long double s21_ceil(double x) {
  long double s;
  if (x == s21_INF || x == -s21_INF) {
    s = x;
  } else if (x != x) {
    s = s21_NAN;
  } else if (x == (long long int)x) {
    s = x;
  } else {
    if (x > 0) {
      x = x + 1;
    }
    long long int a = (long long int)x;
    s = (long double)a;
  }

  return s;
}
