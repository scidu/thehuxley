#include <stdio.h>

int main()
{
    int dist;
    double gas, con;

    scanf("%d\n%lf", &dist, &gas);
    con = dist / gas;
    printf("%.3lf km/l", con);
    return 0;
}