// data_simulator.c
#include "data_simulator.h"
#include <stdlib.h>

void simulateData(DataPoint *data, int length) {
    for (int i = 0; i < length; i++) {
        data[i].ax = (float)rand() / (float)(RAND_MAX / 2) - 1;
        data[i].ay = (float)rand() / (float)(RAND_MAX / 2) - 1;
        data[i].az = (float)rand() / (float)(RAND_MAX / 2) - 1;
        data[i].timestamp = i; // Simplified for demonstration
    }
}
