#include <stdio.h>
#include <stdint.h>
int main () {
    uint64_t dx= 0x152345670;
    while (dx) putchar (0x417765736f6D210a >> ((dx >> 4) << 3));
    return 0;
}
