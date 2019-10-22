#ifndef _PERM_COMB_H
#include <permcomb.h>
#endif

int combu(int n, int r)
{
    return permu(n, r) / factorial(r);
}

int permu(int n, int r)
{
    if (r == 0) {
        return 1;
    }
    if (r == 1) {
        return n;
    } else {
        return n * permu(n - 1, r - 1);
    }
}

///Note: Returns 1 for negative numbers so it does not error
int factorial(int r)
{
    if (r < 1) {
        return 1;
    }
    return r * factorial(r - 1);
}

int powerexp(int number, int power)
{
    if (power < 1) {
        return 1;
    }
    return (number * powerexp(number, power - 1));
}