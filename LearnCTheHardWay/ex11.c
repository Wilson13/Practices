#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    while (i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }

    char *states[] = { "California", "Oregon", NULL, argv[0] };
    int num_states = 4;
    i = num_states - 1;

    while (i >= 0) {
        printf("state %d: %s\n", i, states[i]);
        i--;
    }

    // copy argv into states
    i = 0;
    while (i < num_states && i < argc) {
        states[i] = argv[i];
        printf("states %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}
