#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include "executor.h"

void execute_command(char** args) {
    if (args[0] == NULL) return;

    if (strcmp(args[0], "exit") == 0) {
        printf("Au revoir !\n");
        exit(0);
    }

    pid_t pid = fork();

    if (pid == 0) {
        // Enfant
        if (execvp(args[0], args) == -1) {
            perror("execvp");
            exit(EXIT_FAILURE);
        }
    } else if (pid > 0) {
        // Parent
        wait(NULL);
    } else {
        perror("fork");
    }
}

