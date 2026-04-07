#include <stdio.h>
#include <string.h>

struct Library {
    char books[5][50];
    int count;
};

void addBook(struct Library *lib, char book[]) {
    strcpy(lib->books[lib->count++], book);
}

void displayBooks(struct Library *lib) {
    printf("Books in Library:\n");
    for(int i = 0; i < lib->count; i++) {
        printf("%s\n", lib->books[i]);
    }
}

int main() {
    struct Library lib;
    lib.count = 0;

    addBook(&lib, "Python");
    addBook(&lib, "Java");

    displayBooks(&lib);

    return 0;
}