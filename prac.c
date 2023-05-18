#include <stdio.h>
#include <string.h>
#include <ctype.h>

void get_letters(char *letters, int number);

int main() {
    char letters[10];
    int number;
    memset(letters, '\0', 10);
    scanf("%d", &number);
    get_letters(letters, number);
    printf("%s\n", letters);
    return 0;
}

void get_letters(char *letters, int number)
{
    for (int i = 0; i < number; i++) {
        printf("bruh\n");
        scanf("%c", letters[i]);
    }
}
