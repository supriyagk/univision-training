#include <stdio.h>

struct Packet
{
int crc: 2;
int status:1;
int payload:12;
};

int main()
{
struct Packet p1;
{

    printf("Size of struct Packet: %ld\n", sizeof(p1));

    return 0;
}

}
