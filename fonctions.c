#include <stdlib.h>
#include <string.h>
#include "fonctions.h"

int* compute_prefix_function(const char* pattern) {
    int m = strlen(pattern);
    int* prefix_function = (int*)malloc(m * sizeof(int));

    prefix_function[0] = 0;
    int k = 0;

    for (int q = 1; q < m; q++) {
        while (k > 0 && pattern[k] != pattern[q]) {
            k = prefix_function[k - 1];
        }

        if (pattern[k] == pattern[q]) {
            k++;
        }

        prefix_function[q] = k;
    }

    return prefix_function;
}

int count_occurrences_with_automaton(const char* pattern, const char* text) {
    int m = strlen(pattern);
    int n = strlen(text);

    int* prefix_function = compute_prefix_function(pattern);

    int q = 0; // State variable for the automaton
    int count = 0;

    for (int i = 0; i < n; i++) {
        while (q > 0 && pattern[q] != text[i]) {
            q = prefix_function[q - 1];
        }

        if (pattern[q] == text[i]) {
            q++;
        }

        if (q == m) {
            // Match found
            count++;
            q = prefix_function[q - 1];
        }
    }

    free(prefix_function);
    return count;
}

int count_occurrences_sequential(const char* pattern, const char* text) {
    int m = strlen(pattern);
    int n = strlen(text);

    int count = 0;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        if (j == m) {
            // Match found
            count++;
        }
    }

    return count;
}
