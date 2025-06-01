#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "executor.h"

int main() {
    while (1) {
        printf("mini-shell> ");
        char* input = read_input();
        if (input == NULL) break;

        char** args = parse_input(input);
        execute_command(args);

        free(args);
        free(input);
    }

    return 0;
}
