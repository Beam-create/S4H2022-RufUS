#ifndef _ROS_base_control_Feedback_arduino_msgs_h
#define _ROS_base_control_Feedback_arduino_msgs_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace base_control
{

  class Feedback_arduino_msgs : public ros::Msg
  {
    public:
      typedef float _motor_FL_type;
      _motor_FL_type motor_FL;
      typedef float _motor_FR_type;
      _motor_FR_type motor_FR;
      typedef float _motor_BL_type;
      _motor_BL_type motor_BL;
      typedef float _motor_BR_type;
      _motor_BR_type motor_BR;
      typedef float _mean_speed_FL_type;
      _mean_speed_FL_type mean_speed_FL;
      typedef float _mean_speed_FR_type;
      _mean_speed_FR_type mean_speed_FR;
      typedef float _mean_speed_BL_type;
      _mean_speed_BL_type mean_speed_BL;
      typedef float _mean_speed_BR_type;
      _mean_speed_BR_type mean_speed_BR;
      typedef int16_t _encoder_FL_type;
      _encoder_FL_type encoder_FL;
      typedef int16_t _encoder_FR_type;
      _encoder_FR_type encoder_FR;
      typedef int16_t _encoder_BL_type;
      _encoder_BL_type encoder_BL;
      typedef int16_t _encoder_BR_type;
      _encoder_BR_type encoder_BR;

    Feedback_arduino_msgs():
      motor_FL(0),
      motor_FR(0),
      motor_BL(0),
      motor_BR(0),
      mean_speed_FL(0),
      mean_speed_FR(0),
      mean_speed_BL(0),
      mean_speed_BR(0),
      encoder_FL(0),
      encoder_FR(0),
      encoder_BL(0),
      encoder_BR(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_motor_FL;
      u_motor_FL.real = this->motor_FL;
      *(outbuffer + offset + 0) = (u_motor_FL.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_FL.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_FL.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_FL.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_FL);
      union {
        float real;
        uint32_t base;
      } u_motor_FR;
      u_motor_FR.real = this->motor_FR;
      *(outbuffer + offset + 0) = (u_motor_FR.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_FR.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_FR.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_FR.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_FR);
      union {
        float real;
        uint32_t base;
      } u_motor_BL;
      u_motor_BL.real = this->motor_BL;
      *(outbuffer + offset + 0) = (u_motor_BL.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_BL.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_BL.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_BL.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_BL);
      union {
        float real;
        uint32_t base;
      } u_motor_BR;
      u_motor_BR.real = this->motor_BR;
      *(outbuffer + offset + 0) = (u_motor_BR.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_BR.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_BR.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_BR.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_BR);
      offset += serializeAvrFloat64(outbuffer + offset, this->mean_speed_FL);
      offset += serializeAvrFloat64(outbuffer + offset, this->mean_speed_FR);
      offset += serializeAvrFloat64(outbuffer + offset, this->mean_speed_BL);
      offset += serializeAvrFloat64(outbuffer + offset, this->mean_speed_BR);
      union {
        int16_t real;
        uint16_t base;
      } u_encoder_FL;
      u_encoder_FL.real = this->encoder_FL;
      *(outbuffer + offset + 0) = (u_encoder_FL.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder_FL.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->encoder_FL);
      union {
        int16_t real;
        uint16_t base;
      } u_encoder_FR;
      u_encoder_FR.real = this->encoder_FR;
      *(outbuffer + offset + 0) = (u_encoder_FR.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder_FR.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->encoder_FR);
      union {
        int16_t real;
        uint16_t base;
      } u_encoder_BL;
      u_encoder_BL.real = this->encoder_BL;
      *(outbuffer + offset + 0) = (u_encoder_BL.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder_BL.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->encoder_BL);
      union {
        int16_t real;
        uint16_t base;
      } u_encoder_BR;
      u_encoder_BR.real = this->encoder_BR;
      *(outbuffer + offset + 0) = (u_encoder_BR.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder_BR.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->encoder_BR);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_motor_FL;
      u_motor_FL.base = 0;
      u_motor_FL.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_FL.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_FL.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_FL.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->motor_FL = u_motor_FL.real;
      offset += sizeof(this->motor_FL);
      union {
        float real;
        uint32_t base;
      } u_motor_FR;
      u_motor_FR.base = 0;
      u_motor_FR.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_FR.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_FR.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_FR.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->motor_FR = u_motor_FR.real;
      offset += sizeof(this->motor_FR);
      union {
        float real;
        uint32_t base;
      } u_motor_BL;
      u_motor_BL.base = 0;
      u_motor_BL.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_BL.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_BL.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_BL.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->motor_BL = u_motor_BL.real;
      offset += sizeof(this->motor_BL);
      union {
        float real;
        uint32_t base;
      } u_motor_BR;
      u_motor_BR.base = 0;
      u_motor_BR.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_BR.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_BR.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_BR.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->motor_BR = u_motor_BR.real;
      offset += sizeof(this->motor_BR);
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->mean_speed_FL));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->mean_speed_FR));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->mean_speed_BL));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->mean_speed_BR));
      union {
        int16_t real;
        uint16_t base;
      } u_encoder_FL;
      u_encoder_FL.base = 0;
      u_encoder_FL.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder_FL.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->encoder_FL = u_encoder_FL.real;
      offset += sizeof(this->encoder_FL);
      union {
        int16_t real;
        uint16_t base;
      } u_encoder_FR;
      u_encoder_FR.base = 0;
      u_encoder_FR.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder_FR.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->encoder_FR = u_encoder_FR.real;
      offset += sizeof(this->encoder_FR);
      union {
        int16_t real;
        uint16_t base;
      } u_encoder_BL;
      u_encoder_BL.base = 0;
      u_encoder_BL.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder_BL.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->encoder_BL = u_encoder_BL.real;
      offset += sizeof(this->encoder_BL);
      union {
        int16_t real;
        uint16_t base;
      } u_encoder_BR;
      u_encoder_BR.base = 0;
      u_encoder_BR.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder_BR.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->encoder_BR = u_encoder_BR.real;
      offset += sizeof(this->encoder_BR);
     return offset;
    }

    virtual const char * getType() override { return "base_control/Feedback_arduino_msgs"; };
    virtual const char * getMD5() override { return "2d6b004d820dd2b719b874c1599325ed"; };

  };

}
#endif