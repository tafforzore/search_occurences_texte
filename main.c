#include <stdio.h>
#include <string.h> // Ajoutez cette ligne
#include "fonctions.h"

int main() {
    char text[1000];
    char pattern[100];

    printf("Veuillez entrer le texte : ");
    fgets(text, sizeof(text), stdin);

    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';
    }

    printf("Veuillez entrer le motif à rechercher : ");
    scanf("%s", pattern);

    int occurrences_with_automaton = count_occurrences_with_automaton(pattern, text);
    int occurrences_sequential = count_occurrences_sequential(pattern, text);

    printf("Occurrences du motif dans le texte (avec automate) : %d\n", occurrences_with_automaton);
    printf("Occurrences du motif dans le texte (sans automate) : %d\n", occurrences_sequential);

    return 0;
}
