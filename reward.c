#include "traffic.h"

float compute_reward(TrafficState *state, int action) {
    float delay_penalty = state->queue_length * 2.0f;
    float risk_penalty = state->incident_risk * 5.0f;
    float smoothness_penalty = (action == state->signal_phase) ? 0.0f : 0.1f;

    return -(delay_penalty + risk_penalty + smoothness_penalty);
}
