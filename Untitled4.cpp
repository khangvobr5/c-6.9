#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0;
    printf("C�c so Armstrong c� 3 chu so l�:\n");
    for (num = 100; num < 1000; num++) {
        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, 3);
            originalNum /= 10;
        }
        if (result == num) {
            printf("%d ", num);
        }
        result = 0;
    }
    return 0;
}
