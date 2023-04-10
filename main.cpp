#include <stdio.h>

extern "C" int SubFunc();

int main()
{
	printf("\n" ">>> main(): start\n\n");

    SubFunc();

	printf("\n" "<<< main(): end\n\n");
	return 0;
}
