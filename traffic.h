#ifndef TRAFFIC_H
#define TRAFFIC_H

typedef struct {
    float density;
    float queue_length;
    float incident_risk;
    float weather_factor;
    int signal_phase;
} TrafficState;

void init_state(TrafficState *state);
void print_state(TrafficState *state);

#endif
