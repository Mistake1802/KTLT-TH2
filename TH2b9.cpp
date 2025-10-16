#include <stdio.h>
#include <string.h>

void daoNguocChuoi(char *str) {
    int i, j;
    char temp;

    j = strlen(str) - 1;
    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char s[100];

    printf("Nhap chuoi: ");
    gets(s);

    daoNguocChuoi(s);

    printf("Chuoi dao nguoc: %s\n", s);

    return 0;
}

