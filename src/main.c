// src/main.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../data/data_simulator.h"
#include "../data_processing/calculate_gforce.h"

int main() {
    srand(time(NULL));

    const int length = 10;
    DataPoint data[length];

    simulateData(data, length);

    for (int i = 0; i < length; i++) {
        float gForce = calculateGForce(data[i]);
        printf("Data Point %d: ax=%f, ay=%f, az=%f, timestamp=%u, G-Force=%f\n",
               i, data[i].ax, data[i].ay, data[i].az, data[i].timestamp, gForce);
    }

    return 0;
}
