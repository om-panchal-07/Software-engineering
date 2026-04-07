#include <stdio.h>
#include <string.h>

struct Library {
    char books[5][50];
    int count;
};

void manageLibrary(struct Library *lib) {
    
    strcpy(lib->books[lib->count++], "Python");
    strcpy(lib->books[lib->count++], "Java");

    
    printf("Books in Library:\n");
    for(int i = 0; i < lib->count; i++) {
        printf("%s\n", lib->books[i]);
    }
}

int main() {
    struct Library lib;
    lib.count = 0;

    manageLibrary(&lib);

    return 0;
}