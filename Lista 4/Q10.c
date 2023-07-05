#include <stdio.h>
#include <ctype.h>
#include <string.h>

void converterString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char entrada[31];

    printf("Digite uma string contendo apenas caracteres romanos para letras: ");
    fgets(entrada, sizeof(entrada), stdin);

    int length = strlen(entrada);
    if (length > 0 && entrada[length - 1] == '\n') {
        entrada[length - 1] = '\0';
    }

    converterString(entrada);

    printf("String modificada: %s\n", entrada);

    return 0;
}

