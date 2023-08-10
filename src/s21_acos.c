#include "s21_math.h"

long double s21_acos(double x) {
  long double a;
  if (x > 1.0 || x < -1.0) {
    a = s21_NAN;
  } else if (x == 1) {
    a = 0;
  } else if (x == -1) {
    a = s21_PI;
  } else {
    a = s21_PI_2 - s21_asin(x);
  }
  return a;
}
