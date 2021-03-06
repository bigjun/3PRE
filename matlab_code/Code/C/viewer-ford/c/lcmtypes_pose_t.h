/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by LCM
 **/

#include <stdint.h>
#include <stdlib.h>
#include "lcm_coretypes.h"

#ifndef _lcmtypes_pose_t_h
#define _lcmtypes_pose_t_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _lcmtypes_pose_t lcmtypes_pose_t;
struct _lcmtypes_pose_t
{
    int64_t    utime;
    double     pos[3];
    double     vel[3];
    double     orientation[4];
    double     rotation_rate[3];
    double     accel[3];
};
 
lcmtypes_pose_t   *lcmtypes_pose_t_copy(const lcmtypes_pose_t *p);
void lcmtypes_pose_t_destroy(lcmtypes_pose_t *p);

int  lcmtypes_pose_t_encode(void *buf, int offset, int maxlen, const lcmtypes_pose_t *p);
int  lcmtypes_pose_t_decode(const void *buf, int offset, int maxlen, lcmtypes_pose_t *p);
int  lcmtypes_pose_t_decode_cleanup(lcmtypes_pose_t *p);
int  lcmtypes_pose_t_encoded_size(const lcmtypes_pose_t *p);

// LCM support functions. Users should not call these
int64_t __lcmtypes_pose_t_get_hash(void);
int64_t __lcmtypes_pose_t_hash_recursive(const __lcm_hash_ptr *p);
int     __lcmtypes_pose_t_encode_array(void *buf, int offset, int maxlen, const lcmtypes_pose_t *p, int elements);
int     __lcmtypes_pose_t_decode_array(const void *buf, int offset, int maxlen, lcmtypes_pose_t *p, int elements);
int     __lcmtypes_pose_t_decode_array_cleanup(lcmtypes_pose_t *p, int elements);
int     __lcmtypes_pose_t_encoded_array_size(const lcmtypes_pose_t *p, int elements);
int     __lcmtypes_pose_t_clone_array(const lcmtypes_pose_t *p, lcmtypes_pose_t *q, int elements);

#ifdef __cplusplus
}
#endif

#endif
