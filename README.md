# Recherche d'Occurrences dans un Texte

Ce programme en langage C effectue la recherche du nombre d'occurrences d'un motif dans un texte en utilisant deux approches différentes : une avec un automate fini (algorithme de Knuth-Morris-Pratt) et une autre avec une recherche séquentielle.

## Comment Utiliser

1. **Compilation :** Utilisez le fichier `Makefile` pour compiler le programme.

    ```bash
    make
    ```

2. **Exécution :** Exécutez le programme généré.

    ```bash
    ./main
    ```

3. **Entrées Utilisateur :** Le programme vous demandera de saisir le texte et le motif à rechercher.

4. **Résultats :** Le programme affichera le nombre d'occurrences du motif dans le texte pour les deux approches.

## Fichiers du Projet

- `main.c` : Le fichier principal contenant la fonction `main`.
- `fonctions.c` : Le fichier contenant les fonctions pour le calcul des occurrences avec automate et sans automate.
- `fonctions.h` : Le fichier d'en-tête contenant les déclarations des fonctions.
- `Makefile` : Le fichier Makefile pour la compilation du projet.

## Ajustements

- Vous pouvez ajuster la taille des tableaux dans les fichiers `main.c` et `fonctions.c` selon vos besoins.
- Si vous souhaitez ajouter de nouvelles fonctionnalités ou améliorer le programme, n'hésitez pas à le faire.

## Remarques

- Le programme a été développé dans le cadre de l'apprentissage de l'algorithme de Knuth-Morris-Pratt (KMP) et de la recherche séquentielle.
- N'hésitez pas à fournir des commentaires ou des suggestions d'amélioration.
