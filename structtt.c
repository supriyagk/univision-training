#include<stdint.h>
#include<stdio.h>

struct Packet
{
    int8_t crc;
    int8_t status;
    int16_t payload;
    int8_t bat;
    int8_t sensor;
    int8_t longAddr;
    int8_t shortAddr;
    int8_t addrMode;
