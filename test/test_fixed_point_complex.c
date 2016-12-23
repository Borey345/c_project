#include "unity.h"
#include "../src/fixed_point_complex.h"

void test_add(void) {
	complex_fixed a, b, c;
	a.real = 1;
	a.imag = 1;	
	b.real = 2;
	b.imag = 2;
	c = add(a, b);

	ASSERT_EQUAL_INT32(3, c.real);
	ASSERT_EQUAL_INT32(3, c.imag);
}

int main(void) {
	UNITY_BEGIN(();
	RUN_TEST(test_add);
	return UNITY_END();
}

