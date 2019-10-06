#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    double e = exp(1.0), pi = acos(-1.0);
    double i, ii, iii, iv, v, vi, vii, viii, ix, x;
    i = pow(n, 2);
    ii = pow(n, e);
    iii = sqrt(n);
    iv = pow(n, 1.0 / 3.0);
    v = pow(n, 1.0 / n);
    vi = e * n;
    vii = pi / n;
    viii = log7(n);
    ix = log(n);
    x = logpi(n);
    scanf("%f", &n);
    printf("i)%f\n ii)%f\n ii)%f\n iv)%f\n v)%f\n vi)%f\n vii)%f\n vii)%f\n viii)%f\n ix)%f\n) x)%f\n", i, ii, iii, iv, v, vi, vii, viii, ix, x);
    return 0;
}