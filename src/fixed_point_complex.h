#ifndef FIXED_POINT_COMPLEX_H
#define FIXED_POINT_COMPLEX_H
#include <stdint.h>

typedef struct {
	int32_t real;
	int32_t imag;
} complex_fixed;

complex_fixed sum(complex_fixed, complex_fixed);

complex_fixed subtract(complex_fixed, complex_fixed); 

complex_fixed multiply(complex_fixed, complex_fixed);

complex_fixed divide(complex_fixed, complex_fixed);
#endif

