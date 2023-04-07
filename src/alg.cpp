// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"




double pown(double value, uint16_t n) {
  uint64_t pow = value;
  for (int i = 0; i < n; i++) {
    pow*= value;
  }
  return pow;
}

uint64_t fact(uint16_t n) {
  uint64_t fac = 1;
    for (int i = 1; i <= n; i++) {
        fac *=i;
    }
    return fac;
}

double calcItem(double x, uint16_t n) {
  return (pow(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
  double exp = 1.0;
  for (int i = 1; i <= count; i++) {
    exp += calcItem(x, i);
  }
  return exp;
}

double sinn(double x, uint16_t count) {
  double sin = 0.0;
  for (int i = 0; i < count; i++) {
    sin += calcItem(x, 2*i+1) * pow(-1, i);
  }
  return sin;
}

double cosn(double x, uint16_t count) {
  double cos = 0;
  for (int i = 1; i <= count; i += 1)
    cos += (pown(-1, i - 1) * calcItem(x, 2 * i - 2));
  return cos;
}
