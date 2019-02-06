#include <stdio.h>

extern void func_a1(void);
extern void func_a2(void);

void func_a0(void)
{
	printf("[%s] function_a is called\n", __FILE__);
}

void test(void)
{
	;
}

int main(void)
{
	printf("[%s] hellow tg\n", __FILE__);
	func_a0();

	func_a1();
	func_a2();

	test();

	// bug fixed
	return 0;
}
