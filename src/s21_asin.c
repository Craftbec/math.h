#include "s21_math.h"

long double s21_asin(double x) {
  long double b;
  if (x < -1 || x > 1) {
    b = s21_NAN;
  } else if (x == 1) {
    b = s21_PI_2;
  } else if (x == -1) {
    b = -s21_PI_2;
  } else {
    b = s21_atan(x / s21_sqrt(1 - x * x));
  }
  return b;
}
