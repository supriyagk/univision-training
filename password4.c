#include <stdio.h>
#include <string.h>
#include <ctype.h>


const char *evaluate_password_strength(const char *password) {
	//upper,lower,digit,special
    int length = strlen(password);
    int has_upper = 0;
    int has_lower = 0;
    int has_digit = 0;
    int has_special = 0;

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            has_upper = 1;
        } else if (islower(password[i])) {
            has_lower = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else {
            has_special = 1; // Assume any non-alphanumeric character is special
            }
    }

    // Check password strength based on criteria
    if (length >= STRONG_LENGTH && has_upper && has_lower && has_digit && has_special) {
        return "Strong";
    } else if ((has_upper + has_lower + has_digit + has_special) >= 2 && length >= STRONG_LENGTH) {
        return "Medium";
    } else {
        return "Weak";
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("invalid", argv[0]);
        return 1;
    }

    const char *password = argv[1];
    const char *strength = evaluate_password_strength(password);
        printf("Password strength: %s\n", strength);

    return 0;
}
