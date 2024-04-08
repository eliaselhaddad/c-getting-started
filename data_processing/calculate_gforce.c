// data_processing/calculate_gforce.c
#include "calculate_gforce.h"
#include <math.h>

float calculateGForce(DataPoint data) {
    // Assuming g-force calculation from acceleration components
    // g = sqrt(ax^2 + ay^2 + az^2) / g
    // where g is the acceleration due to gravity (9.81 m/s^2 on Earth)
    float g = sqrt(data.ax * data.ax + data.ay * data.ay + data.az * data.az) / 9.81;
    return g;
}
