#include "unity.h"
#include "../src/fixed_point_complex.h"

void test_sum(void) {
	complex_fixed a, b, c;
	a.real = 1;
	a.imag = 1;	
	b.real = 2;
	b.imag = 2;
	c = sum(a, b);

	TEST_ASSERT_EQUAL_INT32(3, c.real);
	TEST_ASSERT_EQUAL_INT32(3, c.imag);
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_sum);
	return UNITY_END();
}

