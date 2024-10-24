#include <fa.h>
#include <stdlib.h>

int main() {
    struct fa *fa = fa_make_basic(FA_TOTAL);
    fa_minimize(fa);

    char *regexp;
    size_t regexp_len;
    fa_as_regexp(fa, &regexp, &regexp_len);
    printf("%s\n", regexp);
    free(regexp);
}