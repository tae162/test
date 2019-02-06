#include <stdio.h>

int func_a1(void)
{
	printf("[%s] func %s\n", __FILE__, __FUNCTION__);
	return 0;
}
