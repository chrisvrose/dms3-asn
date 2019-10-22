#ifndef _STIR_BELL_H
#include <stirbell.h>
#endif

int bellnumber(int n)
{
    int i, s;
    for (i = 0, s = 0; i <= n; i++) {
        s += stirling2(n, i);
    }
    return s;
}

int stirling2(int n, int k)
{
    int sumster = 0;
    for (int i = 0; i <= k; i++) {
        sumster += (i % 2 ? -1 : 1) * combu(k, i) * powerexp(k - i, n);
    }
    return sumster / factorial(k);
}