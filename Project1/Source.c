#include "Header.h"

main() {
	printf_s("9 + 5 = %d\n", summ(9, 5));
	printf_s("9 - 5 = %d\n", subt(9, 5));
	printf_s("9 * 5 = %d\n", mult(9, 5));
	printf_s("9 / 5 = %f\n", div(9, 5));

	char* first = "first";
	char* second = "second";

    char* s = concat(first, second);
    printf("%s\n", s);


}

char* concat(char* a, char* b) {

	size_t size_a = 0;
    for (size_t i = 0; a[i] != NULL; ++i) {
		size_a++;
    }

	size_t size_b = 0;
	for (size_t i = 0; b[i] != NULL; ++i) {
		size_b++;
	}

	char* result = calloc(size_a + size_b,sizeof(char));

	for (size_t i = 0; i < size_a+size_b; i++)
	{
		if(i < size_a)
			result[i] = a[i];
		else
			result[i] = b[i-size_a];
	}

    return result;
}
