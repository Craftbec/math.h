#include "s21_math.h"

long double s21_fabs(double x) {
  long double res = x;
  if (res < 0) {
    res = res * -1;
  }
  return res;
}
