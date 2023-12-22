// C program to show declaration of global variable

/*In a small code, we can track values of global variables. But if the code size grows, they make code less understandable (hence less maintainable). It becomes difficult to track which function modified the value and how.
so if we want to use a value at multiple places we should better use reference variables */
#include <stdio.h>

int x = 5; // global variable
int main() {

	int y = 10; // local variable
	return 0;
}
