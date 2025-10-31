#if defined(__x86_64__)

#define CAT_INNER(a, b) a##b
#define CAT(a, b) CAT_INNER(a, b)
#define BUILD3(a, b, c) CAT(CAT(a, b), c)
#define BUILD4(a, b, c, d) CAT(BUILD3(a, b, c), d)
#define BUILD5(a, b, c, d, e) CAT(BUILD4(a, b, c, d), e)
#define HEX5(a, b, c, d, e) CAT(0x, BUILD5(a, b, c, d, e))

#define DANK_CONST HEX5(4, 2, 0, 6, 9)

int dank(int x) {
    return x + DANK_CONST;
}

#undef DANK_CONST
#undef HEX5
#undef BUILD5
#undef BUILD4
#undef BUILD3
#undef CAT
#undef CAT_INNER

#else
int dank(int x) {
    return x;
}
#endif
