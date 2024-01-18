#ifndef FONCTIONS_H
#define FONCTIONS_H

int* compute_prefix_function(const char* pattern);
int count_occurrences_with_automaton(const char* pattern, const char* text);
int count_occurrences_sequential(const char* pattern, const char* text);

#endif
