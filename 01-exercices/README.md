# Fake Moulinette

```bash
$ gcc -Wall -Wextra -Werror $(find -type f -name "*.c") all.c
```

Pour tester un fichier à la fois, c'est comme ça :

```bash
$ gcc -Wall -Wextra -Werror ../ex**/*.c ex**.c -o ex**
```