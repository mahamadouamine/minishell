# Nom de l'exécutable
EXEC = minishell

# Fichiers source
SRC = main.c input.c executor.c

# Fichiers objets
OBJ = $(SRC:.c=.o)

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -g

# Règle principale
all: $(EXEC)

# Création de l'exécutable
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

# Compilation des .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f *.o

# Nettoyage complet
fclean: clean
	rm -f $(EXEC)

# Recompilation complète
re: fclean all
