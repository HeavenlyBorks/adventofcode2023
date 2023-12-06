#include <stdio.h>

int main() {
    FILE *f = fopen("day1.in", "r");
    char line[514];
    while (fgets(&line, sizeof(line), f)) {
        puts(line);
    }
}