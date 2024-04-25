#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    file = fopen("example.txt", "w");
    fprintf(file, "Kohli fans");
    fclose(file);

    file = fopen("example.txt", "r");
    fgets(text, sizeof(text), file);
    printf("Data from file is: %s", text);
    fclose(file);

    return 0;
}
