#include <stdio.h>

extern "C" int MyPrintf(char * a, ...);

int main()
{
	printf("\n" ">>> main(): start\n\n");
	
	char a[100] = "ASM_SHIT %d \n";

	MyPrintf(a, 3);
	printf("\n" "<<< main(): end\n\n");
	return 0;
}
