#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "input.h"

char* read_input() {
    char* input = malloc(MAX_INPUT);
    if (!input) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    if (fgets(input, MAX_INPUT, stdin) == NULL) {
        free(input);
        return NULL;
    }

    // Supprime le \n final
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    return input;
}

char** parse_input(char* input) {
    char** args = malloc(MAX_ARGS * sizeof(char*));
    int i = 0;
    char* token = strtok(input, " ");

    while (token != NULL && i < MAX_ARGS - 1) {
        args[i++] = token;
        token = strtok(NULL, " ");
    }

    args[i] = NULL;
    return args;
}
