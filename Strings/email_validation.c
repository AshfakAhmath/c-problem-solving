#include <stdio.h>
#include <string.h>

int main() {
    char email[50];

    printf("Enter your email: ");
    scanf("%s", email);

    char *at_ptr = strchr(email, '@');
    char *dot_ptr = strchr(email, '.');

    if(at_ptr != NULL && dot_ptr != NULL && at_ptr < dot_ptr) {
        printf("Email format is valid\n");
    } else {
        printf("Email format is invalid\n");
    }

    return 0;
}