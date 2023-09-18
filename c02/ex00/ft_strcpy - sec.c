#include <unistd.h>

char *ft_strcpy(char *dest, const char *src) {
    char *original_dest = dest; // Store the original destination pointer

    while ((*dest++ = *src++) != '\0') {
        // Copy characters from src to dest until the null terminator is encountered
    }

    return original_dest; // Return a pointer to the start of the destination string
}

int main() {
    char source[] = "Hello, World!";
    char destination[50]; // Make sure the destination buffer is large enough

    ft_strcpy(destination, source);

    // Print the copied string to verify
    write(1, destination, sizeof(destination) - 1); // -1 to exclude the null terminator
    return 0;
}