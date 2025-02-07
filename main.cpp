#include "good.hpp"
#include "bad.hpp"

int main() {
#ifdef TAILREC
    Good{}
#else
    bad
#endif
        (1000'0000ull);
}
