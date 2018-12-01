#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a = 0;
    long b = 0;
    char c = '\0';
    float d = 0;
    double e = 0;
    scanf("%d %ld %c %f %lf",&a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%lf", a,b,c,d,e);
    return 0;
}

