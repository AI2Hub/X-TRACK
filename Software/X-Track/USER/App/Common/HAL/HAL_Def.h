#ifndef __HAL_DEF_H
#define __HAL_DEF_H

#include <stdint.h>

namespace HAL {
    
/*Clock*/
typedef struct
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t week;
    uint8_t hour;
    uint8_t minute;
    uint8_t second;
    uint16_t millisecond;
} Clock_Info_t;

/*GPS*/
typedef struct {
    double longitude;
    double latitude;
    float altitude;
    float compass;
    float speed;
    int16_t satellites;
    uint8_t hour_utc;
    Clock_Info_t clock;
}GPS_Info_t;

/*MAG*/
typedef struct {
    int16_t x;
    int16_t y;
    int16_t z;
}MAG_Info_t;

/*IMU*/
typedef struct {
    int16_t ax;
    int16_t ay;
    int16_t az;
    int16_t gx;
    int16_t gy;
    int16_t gz;
    int16_t steps;
}IMU_Info_t;

/*AHRS*/
typedef struct{
    float pitch;
    float row;
    float yaw;
}AHRS_Info_t;

/*SportStatus*/
typedef struct {
    float speedKph;
    float speedMaxKph;
    float speedAvgKph;
    uint64_t totalTime;
    float totalDistance;
    uint64_t singleTime;
    float singleDistance;
    float singleCalorie;
    uint32_t lastTick;
}SportStatus_Info_t;

/*Power*/
typedef struct {
    uint16_t voltage;
    uint8_t usage;
    bool isCharging;
}Power_Info_t;

}

#endif
