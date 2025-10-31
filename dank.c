#if defined(__x86_64__)
int dank(int x) {
    asm volatile(
        "add $0x42069, %0\n\t"
        : "+r"(x));
    return x;
}
#else
int dank(int x) {
    return x;
}
#endif
