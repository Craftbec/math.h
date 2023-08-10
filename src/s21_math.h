#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_
#define E_10 2.302585092994046
#define s21_PI 3.141592653589793116
#define S21_M_PI 3.14159265358979323846264338327950288
#define s21_PI_2 1.570796326794896558
#define s21_EPS 1e-17
#define s21_PI_3 1.047197551196597853
#define s21_PI_6 0.523598775598298926
#define s21_PI_4 0.785398163397448309
#define s21_INF 1.0 / 0.0
#define s21_NAN 0.0 / 0.0
#define is_nan(x) __builtin_isnan(x)

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif  // SRC_S21_MATH_H_
