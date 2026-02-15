#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "traffic.h"

float compute_reward(TrafficState *state, int action);
int choose_action(float epsilon);
float decay_epsilon(float epsilon);

int main() {
    srand(time(NULL));

    TrafficState state;
    float epsilon = 1.0f;
    int episodes = 20;

    for (int ep = 0; ep < episodes; ep++) {
        init_state(&state);
        float total_reward = 0.0f;

        for (int step = 0; step < 50; step++) {
            int action = choose_action(epsilon);
            float reward = compute_reward(&state, action);
            total_reward += reward;

            init_state(&state);
        }

        epsilon = decay_epsilon(epsilon);
        printf("Episode %d → Reward: %.2f\n", ep + 1, total_reward);
    }

    return 0;
}
