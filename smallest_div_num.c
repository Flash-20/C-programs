#include <stdio.h>
#include <math.h>
int smallest_divisor(int n) {
	int i;
	for (i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return i;
		}
	}
	return n;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", smallest_divisor(n));

}