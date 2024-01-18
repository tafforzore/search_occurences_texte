#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main() {
    char text[2000]; 
    char pattern[100];  

    printf("veuillez entrer le texte : ");
    fgets(text, sizeof(text), stdin);
    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';
    }

    printf("veuillez entrer le motif à rechercher : ");
    scanf("%s", pattern);

    int occurrences_with_automaton = count_occurrences_with_automaton(pattern, text);
    int occurrences_sequential = count_occurrences_sequential(pattern, text);

    printf("occurrences du motif dans le texte (avec automate) : %d\n", occurrences_with_automaton);
    printf("occurrences du motif dans le texte (sans automate) : %d\n", occurrences_sequential);

    return 0;
}
