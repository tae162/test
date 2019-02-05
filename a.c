#include <stdio.h>

void funcion_a(void)
{
	printf("[%s] function_a is called\n", __FILE__);
}

int main(void)
{
	printf("[%s] hellow tg\n", __FILE__);
	funcion_a();

	return 0;
}
