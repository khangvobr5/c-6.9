#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0;
    printf("Các so Armstrong có 3 chu so là:\n");
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
