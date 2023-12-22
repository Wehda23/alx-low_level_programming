# Hash Tables in C

## 1) Task run command:

Create an empty hash table, incase of failure return `NULL`.

- files
  1. `0-hash_table_create.c`
  2. `0-main.c`

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
```

## 2) Task djb2:

Implementing the djb2 algorithm

- files:

1. `1-djb2.c`

```c
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
```

2. `1-main.c`

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);

}
```

Run Command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
```
