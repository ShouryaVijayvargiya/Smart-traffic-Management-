#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "traffic.h"

float random_float() {
    return (float)rand() / (float)RAND_MAX;
}

void init_state(TrafficState *state) {
    state->density = random_float();
    state->queue_length = random_float();
    state->incident_risk = random_float();
    state->weather_factor = random_float();
    state->signal_phase = rand() % 4;
}

void print_state(TrafficState *state) {
    printf("Density: %.2f\n", state->density);
    printf("Queue Length: %.2f\n", state->queue_length);
    printf("Incident Risk: %.2f\n", state->incident_risk);
    printf("Weather Factor: %.2f\n", state->weather_factor);
    printf("Signal Phase: %d\n", state->signal_phase);
}
