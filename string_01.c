#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[] = "My day begins early, and my dog waits by the door. I pack my bag, grab my coat, and walk with my friend Mia to the bus stop. She laughs at my joke but MY teacher does not! Oh my! Yesterday my class read a mystery about an army of ants, and I told everyone about my family. Is my story true? Ask my grandmother, my uncle, or my neighbor. I made this lunch myself, and my sandwich is the best one in school. My secret! Smile, keep my promise, and share my snacks. Oh my, tomorrow my brother comes too!";
    int len;
    int length;
    int count;

    /* Task 1: find the length of the text. */
    length = strlen(text);
    len = length;

    /* Task 2: count the word "my". */
    count = 0;
    char *token = strtok(text, " ,.!?;");
    while (token != NULL) {
        for (int i = 0; token[i] != '\0'; i++) {
            token[i] = tolower(token[i]);
        }
        if (strcmp(token, "my") == 0) {
            count++;
        }
        token = strtok(NULL, " ,.!?;");
    }

    /* Task 3: print the results. */
    printf("Length: %d\n", length);
    printf("Count: %d\n", count);

    return 0;
}