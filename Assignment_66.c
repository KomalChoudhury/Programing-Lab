#include <stdio.h>

struct Height {
    int feet;
    int inch;
};

int main() {
    struct Height p1, p2, total;

    p1.feet = 5;
    p1.inch = 10;

    p2.feet = 5;
    p2.inch = 6;

    total.feet = p1.feet + p2.feet;
    total.inch = p1.inch + p2.inch;

    if (total.inch >= 12) {
        total.feet += total.inch / 12;
        total.inch = total.inch % 12;
    }

    printf("Total Height = %d feet %d inch\n", total.feet, total.inch);

    return 0;
}

