#include "s21_math.h"

long double s21_log(double x) {
  long double res = 0;
  if (x == s21_INF) {
    res = x;
  } else if (x == -s21_INF || x < 0) {
    res = -s21_NAN;
  } else if (x == 0) {
    res = -s21_INF;
  } else if (is_nan(x)) {
    res = s21_NAN;
  } else {
    if (x > 0 && x < 2) {
      x--;
      long double a = x;
      res = x;
      long double i = 2;
      while (s21_fabs(a) > s21_EPS) {
        a = a * -x * (i - 1) / i;
        i = i + 1;
        res = res + a;
      }
    } else if (x >= 2 && x <= 50) {
      x = (x / (x - 1));
      for (int i = 1; i < 1000; i++) {
        res += 1.0 / (i * s21_pow(x, i));
      }
    } else {
      int e = 0;
      if (x > 10) {
        while (x > 10) {
          x = x / 10;
          e++;
        }
      }
      res = s21_log(x) + e * E_10;
    }
  }

  return res;
}
