#include <stdio.h>

int main(void)
{
    char word[] = "_putchar";
    int i;
    for (i = 0; word[i] != '\0'; i++) {
        putchar(word[i]);
    }
    putchar('\n');
    return 0;
}

