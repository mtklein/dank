#if defined(__x86_64__)

#include <stdint.h>

int dank(int x) {
    uint32_t result;
    __asm__ __volatile__(
        ".byte 0x89, 0xf8\n"
        ".byte 0x05, 0x69, 0x20, 0x04, 0x00\n"
        : "=a"(result)
        : "D"(x)
        : "cc");
    return (int)result;
}

#else

int dank(int x) {
    return x;
}

#endif
