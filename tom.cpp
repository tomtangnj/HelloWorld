#include <string>

using namespace std;

int fibonacci(int i) {
	int ret;

	if (i == 1 || i == 0) {
		ret = 1;
	}
	else {
		ret = fibonacci(i - 1) + fibonacci(i - 2);
	}

	return ret;
}

void testFunc() {
	int i = fibonacci(3);
	assertEquals(i, 2);
}
