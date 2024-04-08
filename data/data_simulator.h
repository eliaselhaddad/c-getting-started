// data_simulator.h
#ifndef DATA_SIMULATOR_H
#define DATA_SIMULATOR_H

typedef struct {
    float ax, ay, az;
    unsigned int timestamp;
} DataPoint;

void simulateData(DataPoint *data, int length);

#endif // DATA_SIMULATOR_H
