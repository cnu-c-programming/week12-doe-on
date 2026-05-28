#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    int sum = 0;
    int value;

    char str[256];
    while (fscanf(fp, "%s", str) != EOF) {

        if (sscanf(str, "%d", &value) == 1) {

            sum += value;
        }
        else {

            fprintf(stderr, "invalid input %s\n", str);
        }
    }

    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
