#include <stdio.h>

int main(void)
{
    printf("Short has %ld bytes.\n", sizeof(short int));
    printf("Int has %ld bytes.\n", sizeof(int));
    printf("Long has %ld bytes.\n", sizeof(long int));
    printf("Long long has %ld bytes.\n",sizeof(long long int));
    printf("Float has %ld bytes.\n", sizeof(float));
    printf("Double has %ld bytes.\n", sizeof(double));
	printf("Long double has %ld bytes.\n", sizeof(long double));
   
    return 0;
}
