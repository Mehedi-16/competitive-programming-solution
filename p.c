#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, x;
        scanf("%d %d", &n, &x);
        double sum = (double)n / x; 
        printf("%.0f\n", ceil(sum));
    }

}
