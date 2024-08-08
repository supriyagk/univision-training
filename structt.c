#include <stdio.h>

struct Packet {
    unsigned int crc: 2;
    unsigned int status: 1;
    unsigned int payload: 12;
};

int main() {
    struct Packet p1;

    p1.crc = 3;
    p1.status = 1;
    p1.payload = 2047;

    printf("Size of struct Packet: %ld\n", sizeof(p1));

    printf("crc: %u\n", p1.crc);
    printf("status: %u\n", p1.status);
    printf("payload: %u\n", p1.payload);

    return 0;
}
