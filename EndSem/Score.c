#include <stdio.h>

int main() {
    int scores[5];
    FILE *file = fopen("Scores.txt", "w");

    printf("Enter scores of 5 students (out of 10): ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &scores[i]);
        fprintf(file, "%d ", scores[i]);
    }

    fclose(file);
    printf("Scores written to Scores.txt successfully.\n");
    return 0;
}
