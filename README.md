 ===============================Mini Shell===================================

 ===============Présentation,
Mini Shell est un projet en langage C qui a pour but de reproduire un shell simplifié. Il permet à l’utilisateur de saisir des commandes, les interpréter, puis les exécuter, comme dans un terminal classique sous Unix/Linux.

==============Membres du groupe,
= Mahamadou Amine,
= Halimatou Saâdia,
= Ali,
= Mahamadou Alkerou

==========Objectifs pédagogiques,
Utiliser les pointeurs et la mémoire dynamique,
Manipuler des chaînes de caractères et des tableaux,
Découper le projet en modules clairs (.h / .c),
Gérer la création et l’exécution de processus (fork, exec, wait),
Comprendre la distinction entre commandes internes et externes,

==========Fonctionnalités,
Lecture de la ligne de commande avec getline,
Découpage des arguments avec strtok,
Commandes externes via execvp,
Commandes internes : cd, exit, help,
Gestion des erreurs avec perror,
Boucle infinie avec prompt personnalisé (minishell$),
Modularisation du code en plusieurs fichiers,
Compilation automatisée via Makefile,

==========Compilation,
Ouvrir un terminal dans le dossier du projet puis exécuter :

make


Pour nettoyer les fichiers objets :

make clean

==========Exécution,
Après compilation, lancez le shell avec :

./minishell


Tapez ensuite vos commandes comme dans un terminal classique :

minishell$ ls
minishell$ cd ..
minishell$ help
minishell$ exit

===========Travail Collaboratif,
La réalisation du projet Mini Shell s’est appuyée sur une dynamique de groupe où chaque membre a contribué en proposant sa propre version du script selon sa compréhension. Ces différentes approches ont ensuite été analysées, testées et adaptées pour créer une version finale cohérente et fonctionnelle.

Ce processus nous a permis d’explorer différentes logiques de résolution, d’apprendre les uns des autres et de construire ensemble un shell minimaliste mais fonctionnel.


============Conclusion,
Ce projet nous a permis de découvrir en profondeur le fonctionnement d’un shell Unix, d'améliorer notre maîtrise du langage C, et de travailler efficacement en équipe autour d'un objectif commun.

Merci pour votre attention
Projet réalisé avec passion par Mahamadou Amine, Halimatou Saâdia, Ali et Mahamadou .