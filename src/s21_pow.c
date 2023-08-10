#include "s21_math.h"

long double s21_pow0(double base, double exp);
long double s21_pow1(double exp);
long double s21_pow2(double base, double exp);
long double s21_pow4(double base, double exp);

long double s21_pow(double base, double exp) {
  long double res;
  if (base == -s21_INF && exp > 0) {
    res = s21_INF;
  } else if (base == -s21_INF && exp < 0) {
    res = 0;
  } else if (base < 0) {
    res = s21_pow0(base, exp);
  } else if (base == 0 && !is_nan(exp)) {
    res = s21_pow1(exp);
  } else if (base == 1) {
    res = 1;
  } else if (is_nan(exp) && base == 0) {
    res = s21_NAN;
  } else {
    res = s21_pow2(base, exp);
  }
  return res;
}

long double s21_pow0(double base, double exp) {
  long double res;
  if ((long long int)exp == exp) {
    res = s21_pow4(base, exp);
  } else {
    if (exp == -s21_INF || exp == s21_INF) {
      if (base * (-1) == 1) {
        res = 1;
      } else {
        if (exp == -s21_INF) {
          res = 0;
        } else {
          res = s21_INF;
        }
      }
    } else {
      res = -s21_NAN;
    }
  }
  return res;
}

long double s21_pow1(double exp1) {
  long double res;
  if (exp1 == 0) {
    res = 1;
  } else if (exp1 < 0) {
    res = s21_INF;
  } else {
    res = 0;
  }
  return res;
}

long double s21_pow2(double base2, double exp2) {
  long double res;
  if ((long long int)exp2 == exp2) {
    res = s21_pow4(base2, exp2);
  } else {
    res = s21_exp(exp2 * (long double)s21_log(base2));
  }
  return res;
}

long double s21_pow4(double base, double exp) {
  long double res;
  if (exp > 0) {
    res = base;
    for (int i = 0; i < (long long int)exp - 1; i++) {
      res = res * base;
    }
  } else if (exp == 0) {
    res = 1;
  } else {
    res = 1 / base;
    for (int i = 0; i < (long long int)exp * (-1) - 1; i++) {
      res /= base;
    }
  }
  return res;
}
