#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("1\n");
        return 0;
    }
    int iguales = 1;
    for (char **arg = argv + 2; *arg != NULL && iguales; arg++)
        if (!AreEqual(*arg, argv[1]))
            iguales = 0;
    printf("%d\n", iguales);
    return 0;
}