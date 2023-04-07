// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


double pown(double value, uint16_t n) {
    double result = pow(x, n);
}

uint64_t fact(uint16_t n) {
    if (n < 0) {
      return "error";
    } else if (n == 0) {
      return 1;
    } else {
      return n * fact(n - 1);
    }
  }
}

double calcItem(double x, uint16_t n) {
  int count = 0;
  while (x != 0) {
    x- = n;
    count+=1;
  }
  return count;
}

double expn(double x, uint16_t count) {
    double result = 1.0;
    for (int i = 1; i <= count; i++) {
        result+=pow(x, i)/i;
    }
    return result;
}

double sinn(double x, uint16_t count) {
  int n = 0;
  int g = 1;
  uint64_t f = 1;
  int m = 1;
  double d = x;
  double sin = 0;
  for (int i = 0; i < n; i++) {
    sin = sin+g*d/f;
    d = d*x*x;
    f = f*(m+1)*(m+2);
    m = m+2;
    g = -g;
  }
}

double cosn(double x, uint16_t count) {
  int g = 1;
  uint64_t f = 1;
  int m = 0;
  double d = x;
  double cosn = 0;
  for (int i = 0; i < count; i++) {
    cosn = 1-cosn*g*d/f;
    d = d*x**2;
    f = f*(m+1)*(m+2);
    m+=2;
    g = -g;
  }
}
