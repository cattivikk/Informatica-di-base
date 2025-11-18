#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMUSER 15
#define NUMPAS 15

void leggiStringa(char s[], int dim)
{
    if (fgets(s, dim, stdin) == NULL)
    {
        s[0] = '\0';
        return;
    }

    size_t len = strlen(s);

    if (len > 0 && s[len - 1] == '\n')
    {
        s[len - 1] = '\0';   // rimuove '\n'
    }
    else
    {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);   // svuota buffer
    }
}

int main(void)
{
    char username[NUMUSER];
    char password[NUMPAS];

    printf("--- LOGIN UTENTE ---\n\n");

    printf("Inserisci username: ");
    leggiStringa(username, NUMUSER);

    printf("Inserisci password: ");
    leggiStringa(password, NUMPAS);

    printf("\nHai inserito:\n");
    printf("Username: %s\n", username);
    printf("Password: %s\n", password);

    return 0;
}

