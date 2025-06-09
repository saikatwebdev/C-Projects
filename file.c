#include<stdio.h>

int main(){
    FILE *file;
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(file, "Hello, World!");
    fprintf(file, "\nThis is a test file.");
    fprintf(file, "\nWriting to a file in C is easy.");
    fclose(file);
    return 0;
}

// This code opens a file named "example.txt" for writing, writes some text to it, and then closes the file.

int newFile(){
    FILE *file;
    file = fopen("newfile.txt", "a+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(file, "Appending new content to the file.\n");
    fprintf(file, "This is another line in the file.\n");
    fclose(file);
    return 0;
}

