#include <stdio.h>

int main() {
    FILE *file = fopen("Scores.txt", "r");
    int score, sum = 0, count = 0;

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%d", &score) != EOF) {
        sum += score;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No scores found.\n");
    } else {
        printf("Average score: %.2f\n", (double)sum / count);
    }

    return 0;
}
