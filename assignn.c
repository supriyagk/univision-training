#include <stdint.h>
#include <stdio.h>

struct Packet
{
    uint8_t crc;     // 2 bits
    uint8_t status;  // 1 bit
    uint16_t payload;// 12 bits
    uint8_t bat;     // 2 bits
    uint8_t sensor;  // 3 bits
    uint8_t longAddr;// 8 bits
    uint8_t shortAddr;// 2 bits
    uint8_t addrMode;// 1 bit
};

int main(void)
{
    uint32_t packetValue;
    printf("Enter the 32-bit packet value: ");
    scanf("%X", &packetValue);

    struct Packet p1;
    p1.crc = (uint8_t) ((packetValue >> 30) & 0x3);          // bits 30-31
    p1.status = (uint8_t) ((packetValue >> 29) & 0x1);       // bit 29
    p1.payload = (uint16_t) ((packetValue >> 17) & 0xFFF);   // bits 17-28
    p1.bat = (uint8_t) ((packetValue >> 15) & 0x3);          // bits 15-16
    p1.sensor = (uint8_t) ((packetValue >> 12) & 0x7);       // bits 12-14
    p1.longAddr = (uint8_t) ((packetValue >> 4) & 0xFF);     // bits 4-11
    p1.shortAddr = (uint8_t) ((packetValue >> 2) & 0x3);     // bits 2-3
    p1.addrMode = (uint8_t) (packetValue & 0x1);             // bit 0

    printf("crc       : %02x\n", p1.crc);
    printf("status    : %02x\n", p1.status);
    printf("payload   : %02x\n", p1.payload);
    printf("bat       : %02x\n", p1.bat);
    printf("sensor    : %02x\n", p1.sensor);
    printf("longAddr  : %02x\n", p1.longAddr);
    printf("shortAddr : %02x\n", p1.shortAddr);
    printf("addrMode  : %02x\n", p1.addrMode);

    return 0;
}
