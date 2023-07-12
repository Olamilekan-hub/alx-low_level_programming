#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters) {
    
    FILE *file;
    char *buffer;
    ssize_t bytesRead, bytesWritten;
    
    if (filename == NULL) {
        return 0;
    }
    

    
    file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }
    
    buffer = (char*)malloc(letters + 1);
    if (buffer == NULL) {
        fclose(file);
        return 0;
    }
    
    bytesRead = fread(buffer, sizeof(char), letters, file);
    if (bytesRead == 0) {
        fclose(file);
        free(buffer);
        return 0;
    }
    
    buffer[bytesRead] = '\0';
    
    bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
    if (bytesWritten != bytesRead) {
        fclose(file);
        free(buffer);
        return 0;
    }
    
    fclose(file);
    free(buffer);
    
    return bytesRead;
}
