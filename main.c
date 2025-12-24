#include <stdio.h>

int main() {
    char buffer[10];
    char input[100] = "This is a very long string that will overflow the buffer";
    
    // Dangerous: buffer overflow - copying 56+ chars into 10-char buffer
    strcpy(buffer, input);
    
    printf("Buffer contents: %s\n", buffer);
    return 0;
}