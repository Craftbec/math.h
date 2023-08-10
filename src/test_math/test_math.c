#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../s21_math.h"

#define BUFFER 1024

START_TEST(abs_test) {
  char str1[BUFFER] = {0};
  char str2[BUFFER] = {0};
  int x = 2147483647;
  while (x > 0) {
    x = -x;
    sprintf(str1, "%d", abs(x));
    sprintf(str2, "%d", s21_abs(x));
    ck_assert_str_eq(str1, str2);
    x = -x;
    sprintf(str1, "%d", abs(x));
    sprintf(str2, "%d", s21_abs(x));
    ck_assert_str_eq(str1, str2);
    x /= 2;
  }
  sprintf(str1, "%d", abs(x));
  sprintf(str2, "%d", s21_abs(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(fabs_test) {
  char str1[BUFFER] = {0};
  char str2[BUFFER] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > -s21_PI * 4 - 0.1) {
    sprintf(str1, "%.8Lf", (long double)fabs(x));
    sprintf(str2, "%.8Lf", (long double)s21_fabs(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(sin_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > -s21_PI * 4 - 0.1) {
    sprintf(str1, "%.8Lf", (long double)sin(x));
    sprintf(str2, "%.8Lf", (long double)s21_sin(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(sin_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  sprintf(str1, "%.8Lf", (long double)sin(x));
  sprintf(str2, "%.8Lf", (long double)s21_sin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sin_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_NAN;
  sprintf(str1, "%.8Lf", (long double)sin(x));
  sprintf(str2, "%.8Lf", (long double)s21_sin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sin_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  sprintf(str1, "%.8Lf", (long double)sin(x));
  sprintf(str2, "%.8Lf", (long double)s21_sin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(cos_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > -s21_PI * 4 - 0.1) {
    sprintf(str1, "%.8Lf", (long double)cos(x));
    sprintf(str2, "%.8Lf", (long double)s21_cos(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(cos_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  sprintf(str1, "%.8Lf", (long double)cos(x));
  sprintf(str2, "%.8Lf", (long double)s21_cos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(cos_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_NAN;
  sprintf(str1, "%.8Lf", (long double)cos(x));
  sprintf(str2, "%.8Lf", (long double)s21_cos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(cos_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  sprintf(str1, "%.8Lf", (long double)cos(x));
  sprintf(str2, "%.8Lf", (long double)s21_cos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(tan_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > -s21_PI * 4 - 0.1) {
    sprintf(str1, "%.8Lf", (long double)tan(x));
    sprintf(str2, "%.8Lf", (long double)s21_tan(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(tan_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  sprintf(str1, "%.8Lf", (long double)tan(x));
  sprintf(str2, "%.8Lf", (long double)s21_tan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(tan_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_NAN;
  sprintf(str1, "%.8Lf", (long double)tan(x));
  sprintf(str2, "%.8Lf", (long double)s21_tan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(tan_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  sprintf(str1, "%.8Lf", (long double)tan(x));
  sprintf(str2, "%.8Lf", (long double)s21_tan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(tan_test_4) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI / 2;
  sprintf(str1, "%.8Lf", (long double)tan(x));
  sprintf(str2, "%.8Lf", (long double)s21_tan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(tan_test_5) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -s21_PI / 2;
  sprintf(str1, "%.8Lf", (long double)tan(x));
  sprintf(str2, "%.8Lf", (long double)s21_tan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(fmod_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  double y = s21_PI * 4 + 0.1;
  while (x > -s21_PI * 4 - 0.1) {
    sprintf(str1, "%.8Lf", (long double)fmod(x, y));
    sprintf(str2, "%.8Lf", (long double)s21_fmod(x, y));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(fmod_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  double y = s21_INF;
  sprintf(str1, "%.8Lf", (long double)fmod(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_fmod(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(fmod_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  double y = 0;
  sprintf(str1, "%.8Lf", (long double)fmod(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_fmod(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(fmod_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  double y = s21_NAN;
  sprintf(str1, "%.8Lf", (long double)fmod(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_fmod(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(fmod_test_4) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  double y = s21_PI;
  sprintf(str1, "%.8Lf", (long double)fmod(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_fmod(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(fmod_test_5) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI;
  double y = 0;
  sprintf(str1, "%.8Lf", (long double)fmod(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_fmod(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(fmod_test_6) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI;
  double y = s21_INF;
  sprintf(str1, "%.8Lf", (long double)fmod(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_fmod(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(fmod_test_7) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI;
  double y = -s21_PI;
  sprintf(str1, "%.8Lf", (long double)fmod(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_fmod(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(ceil_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > 0) {
    sprintf(str1, "%.8Lf", (long double)ceil(x));
    sprintf(str2, "%.8Lf", (long double)s21_ceil(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
    ck_assert_ldouble_eq((long double)ceil(x), (long double)s21_ceil(x));
  }
  x = 1;
  while (x > -1) {
    x -= 0.05;
    ck_assert_ldouble_eq((long double)ceil(x), (long double)s21_ceil(x));
  }
  x = -1;
  while (x > -s21_PI * 4 - 0.1) {
    sprintf(str1, "%.8Lf", (long double)ceil(x));
    sprintf(str2, "%.8Lf", (long double)s21_ceil(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(ceil_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  sprintf(str1, "%.8Lf", (long double)ceil(x));
  sprintf(str2, "%.8Lf", (long double)s21_ceil(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(ceil_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_NAN;
  sprintf(str1, "%.8Lf", (long double)ceil(x));
  sprintf(str2, "%.8Lf", (long double)s21_ceil(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(ceil_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  sprintf(str1, "%.8Lf", (long double)ceil(x));
  sprintf(str2, "%.8Lf", (long double)s21_ceil(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(ceil_test_4) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -1;
  sprintf(str1, "%.8Lf", (long double)ceil(x));
  sprintf(str2, "%.8Lf", (long double)s21_ceil(x));
  ck_assert_str_eq(str1, str2);
  x = 1;
  sprintf(str1, "%.8Lf", (long double)ceil(x));
  sprintf(str2, "%.8Lf", (long double)s21_ceil(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(floor_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > -s21_PI * 4 - 0.1) {
    sprintf(str1, "%.8Lf", (long double)floor(x));
    sprintf(str2, "%.8Lf", (long double)s21_floor(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(floor_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  sprintf(str1, "%.8Lf", (long double)floor(x));
  sprintf(str2, "%.8Lf", (long double)s21_floor(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(floor_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_NAN;
  sprintf(str1, "%.8Lf", (long double)floor(x));
  sprintf(str2, "%.8Lf", (long double)s21_floor(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(floor_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  sprintf(str1, "%.8Lf", (long double)floor(x));
  sprintf(str2, "%.8Lf", (long double)s21_floor(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(floor_test_4) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1;
  sprintf(str1, "%.8Lf", (long double)floor(x));
  sprintf(str2, "%.8Lf", (long double)s21_floor(x));
  ck_assert_str_eq(str1, str2);
  x = -1;
  sprintf(str1, "%.8Lf", (long double)floor(x));
  sprintf(str2, "%.8Lf", (long double)s21_floor(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sqrt_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > -s21_PI * 4 - 0.1) {
    sprintf(str1, "%.10Lf", (long double)sqrt(x));
    sprintf(str2, "%.10Lf", (long double)s21_sqrt(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(sqrt_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_NAN;
  sprintf(str1, "%.10Lf", (long double)sqrt(x));
  sprintf(str2, "%.10Lf", (long double)s21_sqrt(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sqrt_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  sprintf(str1, "%.10Lf", (long double)sqrt(x));
  sprintf(str2, "%.10Lf", (long double)s21_sqrt(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sqrt_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -s21_INF;
  sprintf(str1, "%.10Lf", (long double)sqrt(x));
  sprintf(str2, "%.10Lf", (long double)s21_sqrt(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sqrt_test_4) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  sprintf(str1, "%.10Lf", (long double)sqrt(x));
  sprintf(str2, "%.10Lf", (long double)s21_sqrt(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sqrt_test_5) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1999 * s21_PI * 4 + 0.1;
  sprintf(str1, "%.10Lf", (long double)sqrt(x));
  sprintf(str2, "%.10Lf", (long double)s21_sqrt(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(exp_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > -s21_PI * 4 - 0.1) {
    sprintf(str1, "%.8Lf", (long double)exp(x));
    sprintf(str2, "%.8Lf", (long double)s21_exp(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(exp_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_NAN;
  sprintf(str1, "%.8Lf", (long double)exp(x));
  sprintf(str2, "%.8Lf", (long double)s21_exp(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(exp_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  sprintf(str1, "%.8Lf", (long double)exp(x));
  sprintf(str2, "%.8Lf", (long double)s21_exp(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(exp_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -s21_INF;
  sprintf(str1, "%.8Lf", (long double)exp(x));
  sprintf(str2, "%.8Lf", (long double)s21_exp(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(exp_test_4) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  sprintf(str1, "%.8Lf", (long double)exp(x));
  sprintf(str2, "%.8Lf", (long double)s21_exp(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(exp_test_5) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  sprintf(str1, "%.8Lf", (long double)exp(x));
  sprintf(str2, "%.8Lf", (long double)s21_exp(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(exp_test_6) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1;
  sprintf(str1, "%.8Lf", (long double)exp(x));
  sprintf(str2, "%.8Lf", (long double)s21_exp(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(exp_test_7) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1000000;
  sprintf(str1, "%.8Lf", (long double)exp(x));
  sprintf(str2, "%.8Lf", (long double)s21_exp(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(exp_test_8) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -1000000;
  sprintf(str1, "%.8Lf", (long double)exp(x));
  sprintf(str2, "%.8Lf", (long double)s21_exp(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(log_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > -s21_PI * 4 - 0.1) {
    sprintf(str1, "%.8Lf", (long double)log(x));
    sprintf(str2, "%.8Lf", (long double)s21_log(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(log_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_NAN;
  sprintf(str1, "%.8Lf", (long double)log(x));
  sprintf(str2, "%.8Lf", (long double)s21_log(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(log_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  sprintf(str1, "%.8Lf", (long double)log(x));
  sprintf(str2, "%.8Lf", (long double)s21_log(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(log_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -s21_INF;
  sprintf(str1, "%.8Lf", (long double)log(x));
  sprintf(str2, "%.8Lf", (long double)s21_log(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(log_test_4) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  sprintf(str1, "%.8Lf", (long double)log(x));
  sprintf(str2, "%.8Lf", (long double)s21_log(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(log_test_5) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  sprintf(str1, "%.8Lf", (long double)log(x));
  sprintf(str2, "%.8Lf", (long double)s21_log(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(log_test_6) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1000000;
  sprintf(str1, "%.8Lf", (long double)log(x));
  sprintf(str2, "%.8Lf", (long double)s21_log(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(atan_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > -s21_PI * 4 - 0.1) {
    sprintf(str1, "%Lf", (long double)atan(x));
    sprintf(str2, "%Lf", (long double)s21_atan(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(atan_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_NAN;
  sprintf(str1, "%Lf", (long double)atan(x));
  sprintf(str2, "%Lf", (long double)s21_atan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(atan_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  sprintf(str1, "%Lf", (long double)atan(x));
  sprintf(str2, "%Lf", (long double)s21_atan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(atan_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -s21_INF;
  sprintf(str1, "%Lf", (long double)atan(x));
  sprintf(str2, "%Lf", (long double)s21_atan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(atan_test_4) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  sprintf(str1, "%Lf", (long double)atan(x));
  sprintf(str2, "%Lf", (long double)s21_atan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(atan_test_5) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  sprintf(str1, "%Lf", (long double)atan(x));
  sprintf(str2, "%Lf", (long double)s21_atan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(atan_test_6) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1000000;
  sprintf(str1, "%Lf", (long double)atan(x));
  sprintf(str2, "%Lf", (long double)s21_atan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(atan_test_7) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -1000000;
  sprintf(str1, "%Lf", (long double)atan(x));
  sprintf(str2, "%Lf", (long double)s21_atan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(atan_test_8) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1;
  sprintf(str1, "%Lf", (long double)atan(x));
  sprintf(str2, "%Lf", (long double)s21_atan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(atan_test_9) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -1;
  sprintf(str1, "%Lf", (long double)atan(x));
  sprintf(str2, "%Lf", (long double)s21_atan(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(acos_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > -(s21_PI * 4 - 0.1)) {
    sprintf(str1, "%Lf", (long double)acos(x));
    sprintf(str2, "%Lf", (long double)s21_acos(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(acos_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_NAN;
  sprintf(str1, "%Lf", (long double)acos(x));
  sprintf(str2, "%Lf", (long double)s21_acos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(acos_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  sprintf(str1, "%Lf", (long double)acos(x));
  sprintf(str2, "%Lf", (long double)s21_acos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(acos_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -s21_INF;
  sprintf(str1, "%Lf", (long double)acos(x));
  sprintf(str2, "%Lf", (long double)s21_acos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(acos_test_4) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  sprintf(str1, "%Lf", (long double)acos(x));
  sprintf(str2, "%Lf", (long double)s21_acos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(acos_test_5) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  sprintf(str1, "%Lf", (long double)acos(x));
  sprintf(str2, "%Lf", (long double)s21_acos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(acos_test_6) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1000000;
  sprintf(str1, "%Lf", (long double)acos(x));
  sprintf(str2, "%Lf", (long double)s21_acos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(acos_test_7) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -1000000;
  sprintf(str1, "%Lf", (long double)acos(x));
  sprintf(str2, "%Lf", (long double)s21_acos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(acos_test_8) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1;
  sprintf(str1, "%Lf", (long double)acos(x));
  sprintf(str2, "%Lf", (long double)s21_acos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(acos_test_9) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -1;
  sprintf(str1, "%Lf", (long double)acos(x));
  sprintf(str2, "%Lf", (long double)s21_acos(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(asin_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  while (x > -(s21_PI * 4 - 0.1)) {
    sprintf(str1, "%Lf", (long double)asin(x));
    sprintf(str2, "%Lf", (long double)s21_asin(x));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(asin_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_NAN;
  sprintf(str1, "%Lf", (long double)asin(x));
  sprintf(str2, "%Lf", (long double)s21_asin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(asin_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  sprintf(str1, "%Lf", (long double)asin(x));
  sprintf(str2, "%Lf", (long double)s21_asin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(asin_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -s21_INF;
  sprintf(str1, "%Lf", (long double)asin(x));
  sprintf(str2, "%Lf", (long double)s21_asin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(asin_test_4) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  sprintf(str1, "%Lf", (long double)asin(x));
  sprintf(str2, "%Lf", (long double)s21_asin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(asin_test_5) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 4 + 0.1;
  sprintf(str1, "%Lf", (long double)asin(x));
  sprintf(str2, "%Lf", (long double)s21_asin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(asin_test_6) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1000000;
  sprintf(str1, "%Lf", (long double)asin(x));
  sprintf(str2, "%Lf", (long double)s21_asin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(asin_test_7) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -1000000;
  sprintf(str1, "%Lf", (long double)asin(x));
  sprintf(str2, "%Lf", (long double)s21_asin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(asin_test_8) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1;
  sprintf(str1, "%Lf", (long double)asin(x));
  sprintf(str2, "%Lf", (long double)s21_asin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(asin_test_9) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -1;
  sprintf(str1, "%Lf", (long double)asin(x));
  sprintf(str2, "%Lf", (long double)s21_asin(x));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_0) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI * 2 + 0.1;
  double y = s21_PI * 2 + 0.1;
  while (x > -s21_PI * 2 - 0.1) {
    sprintf(str1, "%.8Lf", (long double)pow(x, y));
    sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
    x -= 0.05;
    ck_assert_str_eq(str1, str2);
    memset(str1, 0, sizeof(str1));
    memset(str1, 0, sizeof(str2));
  }
}
END_TEST

START_TEST(pow_test_1) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  double y = s21_INF;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_2) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  double y = 0;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_3) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  double y = s21_NAN;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_4) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_INF;
  double y = s21_PI;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_5) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI;
  double y = 0;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_6) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI;
  double y = s21_INF;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_7) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = s21_PI;
  double y = -s21_PI;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_8) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -s21_INF;
  double y = s21_PI;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_9) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -s21_INF;
  double y = -s21_PI;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_10) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -10;
  double y = s21_INF;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_11) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -10;
  double y = -s21_INF;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_12) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -1;
  double y = -s21_INF;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_13) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -1;
  double y = s21_INF;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_14) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 1;
  double y = -23;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_15) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  double y = -s21_INF;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_16) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = 0;
  double y = s21_INF;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(pow_test_17) {
  char str1[1024] = {0};
  char str2[1024] = {0};
  double x = -12;
  double y = -5;
  sprintf(str1, "%.8Lf", (long double)pow(x, y));
  sprintf(str2, "%.8Lf", (long double)s21_pow(x, y));
  ck_assert_str_eq(str1, str2);
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, abs_test);    // ABS
  tcase_add_test(tc1_1, fabs_test);   // FABS
  tcase_add_test(tc1_1, sin_test_0);  // SIN
  tcase_add_test(tc1_1, sin_test_1);
  tcase_add_test(tc1_1, sin_test_2);
  tcase_add_test(tc1_1, sin_test_3);
  tcase_add_test(tc1_1, cos_test_0);  // COS
  tcase_add_test(tc1_1, cos_test_1);
  tcase_add_test(tc1_1, cos_test_2);
  tcase_add_test(tc1_1, cos_test_3);
  tcase_add_test(tc1_1, tan_test_0);  // TAN
  tcase_add_test(tc1_1, tan_test_1);
  tcase_add_test(tc1_1, tan_test_2);
  tcase_add_test(tc1_1, tan_test_3);
  tcase_add_test(tc1_1, tan_test_4);
  tcase_add_test(tc1_1, tan_test_5);
  tcase_add_test(tc1_1, fmod_test_0);  // FMOD
  tcase_add_test(tc1_1, fmod_test_1);
  tcase_add_test(tc1_1, fmod_test_2);
  tcase_add_test(tc1_1, fmod_test_3);
  tcase_add_test(tc1_1, fmod_test_4);
  tcase_add_test(tc1_1, fmod_test_5);
  tcase_add_test(tc1_1, fmod_test_6);
  tcase_add_test(tc1_1, fmod_test_7);
  tcase_add_test(tc1_1, ceil_test_0);  // CEIL
  tcase_add_test(tc1_1, ceil_test_1);
  tcase_add_test(tc1_1, ceil_test_2);
  tcase_add_test(tc1_1, ceil_test_3);
  tcase_add_test(tc1_1, ceil_test_4);
  tcase_add_test(tc1_1, floor_test_0);  // FLOOR
  tcase_add_test(tc1_1, floor_test_1);
  tcase_add_test(tc1_1, floor_test_2);
  tcase_add_test(tc1_1, floor_test_3);
  tcase_add_test(tc1_1, floor_test_4);
  tcase_add_test(tc1_1, sqrt_test_0);  // SQRT
  tcase_add_test(tc1_1, sqrt_test_1);
  tcase_add_test(tc1_1, sqrt_test_2);
  tcase_add_test(tc1_1, sqrt_test_3);
  tcase_add_test(tc1_1, sqrt_test_4);
  tcase_add_test(tc1_1, sqrt_test_5);
  tcase_add_test(tc1_1, exp_test_0);  // EXP
  tcase_add_test(tc1_1, exp_test_1);
  tcase_add_test(tc1_1, exp_test_2);
  tcase_add_test(tc1_1, exp_test_3);
  tcase_add_test(tc1_1, exp_test_4);
  tcase_add_test(tc1_1, exp_test_5);
  tcase_add_test(tc1_1, exp_test_6);
  tcase_add_test(tc1_1, exp_test_7);
  tcase_add_test(tc1_1, exp_test_8);
  tcase_add_test(tc1_1, log_test_0);  // LOG
  tcase_add_test(tc1_1, log_test_1);
  tcase_add_test(tc1_1, log_test_2);
  tcase_add_test(tc1_1, log_test_3);
  tcase_add_test(tc1_1, log_test_4);
  tcase_add_test(tc1_1, log_test_5);
  tcase_add_test(tc1_1, log_test_6);
  tcase_add_test(tc1_1, atan_test_0);  // ATAN
  tcase_add_test(tc1_1, atan_test_1);
  tcase_add_test(tc1_1, atan_test_2);
  tcase_add_test(tc1_1, atan_test_3);
  tcase_add_test(tc1_1, atan_test_4);
  tcase_add_test(tc1_1, atan_test_5);
  tcase_add_test(tc1_1, atan_test_6);
  tcase_add_test(tc1_1, atan_test_7);
  tcase_add_test(tc1_1, atan_test_8);
  tcase_add_test(tc1_1, atan_test_9);
  tcase_add_test(tc1_1, acos_test_0);  // ACOS
  tcase_add_test(tc1_1, acos_test_1);
  tcase_add_test(tc1_1, acos_test_2);
  tcase_add_test(tc1_1, acos_test_3);
  tcase_add_test(tc1_1, acos_test_4);
  tcase_add_test(tc1_1, acos_test_5);
  tcase_add_test(tc1_1, acos_test_6);
  tcase_add_test(tc1_1, acos_test_7);
  tcase_add_test(tc1_1, acos_test_8);
  tcase_add_test(tc1_1, acos_test_9);
  tcase_add_test(tc1_1, asin_test_0);  // ASIN
  tcase_add_test(tc1_1, asin_test_1);
  tcase_add_test(tc1_1, asin_test_2);
  tcase_add_test(tc1_1, asin_test_3);
  tcase_add_test(tc1_1, asin_test_4);
  tcase_add_test(tc1_1, asin_test_5);
  tcase_add_test(tc1_1, asin_test_6);
  tcase_add_test(tc1_1, asin_test_7);
  tcase_add_test(tc1_1, asin_test_8);
  tcase_add_test(tc1_1, asin_test_9);
  tcase_add_test(tc1_1, pow_test_0);  // POW
  tcase_add_test(tc1_1, pow_test_1);
  tcase_add_test(tc1_1, pow_test_2);
  tcase_add_test(tc1_1, pow_test_3);
  tcase_add_test(tc1_1, pow_test_4);
  tcase_add_test(tc1_1, pow_test_5);
  tcase_add_test(tc1_1, pow_test_6);
  tcase_add_test(tc1_1, pow_test_7);
  tcase_add_test(tc1_1, pow_test_8);
  tcase_add_test(tc1_1, pow_test_9);
  tcase_add_test(tc1_1, pow_test_10);  // POW
  tcase_add_test(tc1_1, pow_test_11);
  tcase_add_test(tc1_1, pow_test_12);
  tcase_add_test(tc1_1, pow_test_13);
  tcase_add_test(tc1_1, pow_test_14);
  tcase_add_test(tc1_1, pow_test_15);
  tcase_add_test(tc1_1, pow_test_16);
  tcase_add_test(tc1_1, pow_test_17);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
