#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void scramble(char word[], char scrambled[]) {
    int len = strlen(word);
    int used[20] = {0};
    int i, pos;

    for (i = 0; i < len; i++) {
        do {
            pos = rand() % len;
        } while (used[pos] == 1);

        used[pos] = 1;
        scrambled[i] = word[pos];
    }
    scrambled[len] = '\0';
}

int main() {
    srand(time(NULL));

    char words[][20] = {
        "computer",
        "program",
        "science",
        "player",
        "string",
        "school",
        "random",
        "puzzle"
    };

    int totalWords = sizeof(words) / sizeof(words[0]);
    char original[20], scrambled[20], guess[20];
    int chances = 3;

    // Pick a random word
    strcpy(original, words[rand() % totalWords]);

    // Scramble it
    scramble(original, scrambled);

    printf("=== WORD SCRAMBLE GAME ===\n\n");
    printf("Unscramble this word: %s\n", scrambled);

    while (chances > 0) {
        printf("\nChances left: %d\n", chances);
        printf("Enter your guess: ");
        scanf("%s", guess);

        if (strcmp(original, guess) == 0) {
            printf("\nCorrect! You guessed the word!\n");
            return 0;
        } else {
            printf("Wrong guess! Try again.\n");
        }

        chances--;
    }

    printf("\nYou are out of chances.\n");
    printf("The correct word was: %s\n", original);

    return 0;
}