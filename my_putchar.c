/*
** EPITECH PROJECT, 2022
** Librairies-Epitech
** File description:
** my_putchar
*/

// L'utilisation du type void indique que la fonction ne retourne aucune valeur.
// Type char, chaîne de caractère, du code ASCII. // c = variable classique

void my_putchar(char c) // [type void nul] [nom de la fonction] [variable avec type char]
{
    write(1, &c, 1); // (http://manpagesfr.free.fr/man/man2/write.2.html)
}