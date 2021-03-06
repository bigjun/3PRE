/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>

#ifndef _lcmtypes_mtig_t_h
#define _lcmtypes_mtig_t_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _lcmtypes_mtig_t lcmtypes_mtig_t;
struct _lcmtypes_mtig_t
{
    int64_t    ts_unix;
    int64_t    ts_packet;
    int64_t    ts_rtc;
    int16_t    status;
    int16_t    sample_counter;
    double     eul_roll;
    double     eul_pitch;
    double     eul_yaw;
    double     acc_x;
    double     acc_y;
    double     acc_z;
    double     gyr_p;
    double     gyr_q;
    double     gyr_r;
    double     mag_x;
    double     mag_y;
    double     mag_z;
    double     pos_lat;
    double     pos_lon;
    double     pos_alt;
    double     vel_n;
    double     vel_e;
    double     vel_d;
    double     rawgps_pressure;
    int16_t    rawgps_pressureage;
    int64_t    rawgps_timeofweek;
    double     rawgps_pos_lat;
    double     rawgps_pos_lon;
    double     rawgps_pos_alt;
    double     rawgps_vel_n;
    double     rawgps_vel_e;
    double     rawgps_vel_d;
    double     rawgps_accuracy_horiz;
    double     rawgps_accuracy_vert;
    double     rawgps_accuracy_speed;
    int16_t    rawgps_dataage;
    int8_t     publish_contains;
};
 
lcmtypes_mtig_t   *lcmtypes_mtig_t_copy(const lcmtypes_mtig_t *p);
void lcmtypes_mtig_t_destroy(lcmtypes_mtig_t *p);

int  lcmtypes_mtig_t_encode(void *buf, int offset, int maxlen, const lcmtypes_mtig_t *p);
int  lcmtypes_mtig_t_decode(const void *buf, int offset, int maxlen, lcmtypes_mtig_t *p);
int  lcmtypes_mtig_t_decode_cleanup(lcmtypes_mtig_t *p);
int  lcmtypes_mtig_t_encoded_size(const lcmtypes_mtig_t *p);

// LCM support functions. Users should not call these
int64_t __lcmtypes_mtig_t_get_hash(void);
int64_t __lcmtypes_mtig_t_hash_recursive(const __lcm_hash_ptr *p);
int     __lcmtypes_mtig_t_encode_array(void *buf, int offset, int maxlen, const lcmtypes_mtig_t *p, int elements);
int     __lcmtypes_mtig_t_decode_array(const void *buf, int offset, int maxlen, lcmtypes_mtig_t *p, int elements);
int     __lcmtypes_mtig_t_decode_array_cleanup(lcmtypes_mtig_t *p, int elements);
int     __lcmtypes_mtig_t_encoded_array_size(const lcmtypes_mtig_t *p, int elements);
int     __lcmtypes_mtig_t_clone_array(const lcmtypes_mtig_t *p, lcmtypes_mtig_t *q, int elements);

#ifdef __cplusplus
}
#endif

#endif
