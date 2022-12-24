#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/**
	 * write line of code here
	 * Remember: its magic
	 * main - magic number
	 * - you are not allowd to use a
	 *   - you are noy allowed yo modify p
	 *   - only one statement
	 *   - your are not allowed to code anything else than this line of code
	 */

	*(p + 5) = 98;
	/*....this willll prints 98\n  */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
