# Get_Next_Line

## Description
Ce projet vise à implémenter une fonction qui renvoie une ligne lue depuis un descripteur de fichier. Cette fonction est particulièrement utile pour analyser des fichiers ligne par ligne de manière efficace.

## Fonctionnalités
- Lecture ligne par ligne depuis un file descriptor
- Gestion de plusieurs descripteurs de fichiers simultanément
- Fonction réutilisable dans d'autres projets

## Comment l'utiliser
```c
#include "get_next_line.h"

int main(void)
{
    int     fd;
    char    *line;

    fd = open("example.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}
```

## Compilation
```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 *.c
```

## Structure du projet
- `get_next_line.c` : Contient la fonction principale get_next_line
- `get_next_line_utils.c` : Fonctions utilitaires
- `get_next_line.h` : Header avec prototypes et définitions

## Partie bonus
La partie bonus permet de gérer plusieurs descripteurs de fichiers simultanément sans perdre le fil de lecture de chacun.

## Auteur
- BadrELG

## Licence
Ce projet est développé dans le cadre d'un cursus d'apprentissage de 42.
