#include <stdio.h>

int main(int argc, char *argv[]) {
    char buffer[10];
   
    if (argc < 2) {
        printf("Usage: %s <input_string>\n", argv[0]);
        return 1;
    }
    
    // Dangerous: buffer overflow - copying argv[1] into 10-char buffer
    strcpy(buffer, argv[1]);
    
    printf("Buffer contents: %s\n", buffer);
    return 0;
}