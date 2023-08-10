#include "s21_math.h"

long double s21_tan(double x) {
  long double tanx;
  long double sinx = s21_sin(x);
  long double cosx = s21_cos(x);
  if (cosx == 0) {
    if (sinx > 0) {
      tanx = 16331239353195370;
    }
    if (sinx < 0) {
      tanx = -16331239353195370;
    }
  } else {
    tanx = sinx / cosx;
  }
  return tanx;
}
