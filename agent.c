#include <stdlib.h>

int choose_action(float epsilon) {
    float r = (float)rand() / RAND_MAX;

    if (r < epsilon)
        return rand() % 4;

    return rand() % 4;
}

float decay_epsilon(float epsilon) {
    if (epsilon > 0.01f)
        epsilon *= 0.995f;

    return epsilon;
}
