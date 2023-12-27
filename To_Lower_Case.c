#include <stdio.h>
#include <ctype.h>

int main() {
    char str[50];
    fgets(str, 50, stdin);

    for (int i = 0; str[i] != NULL; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }

    printf("%s", str);

    return 0;
}
