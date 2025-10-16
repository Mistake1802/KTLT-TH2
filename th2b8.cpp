#include <stdio.h>
#include <string.h>

int isStrongPassword(char pw[]) {
    int length = strlen(pw);
    int i;
    int upper = 0, lower = 0, digit = 0;

    if (length < 8)
        return 0;

    for (i = 0; i < length; i++) {
        if (pw[i] >= 'A' && pw[i] <= 'Z')
            upper = 1;
        else if (pw[i] >= 'a' && pw[i] <= 'z')
            lower = 1;
        else if (pw[i] >= '0' && pw[i] <= '9')
            digit = 1;
    }

    if (upper == 1 && lower == 1 && digit == 1)
        return 1;
    else
        return 0;
}

int main() {
    char password[100];

    printf("Nhap mat khau: ");
    scanf("%s", password);

    if (isStrongPassword(password) == 1)
        printf("Mat khau manh\n");
    else
        printf("Mat khau yeu\n");

    return 0;
}

