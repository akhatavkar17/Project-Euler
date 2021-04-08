#include <iostream>
using namespace std;

int main()
{
    long long int i;
    long long int n = 600851475143;

    for(i = 3; i <= n; i += 2) {
        while(n % i == 0) {
            n /= i;
        }

        if (n == 1) break;
    }

    cout<< i;
}
