#include <stdio.h>

int main() {
    long long i, num = 600851475143;
    for (i = 3; num > 1; i += 2)
        while (num % i == 0)
            num /= i;
    printf("%lld\n", i - 2);
    return 0;
}
