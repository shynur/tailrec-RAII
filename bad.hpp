#include <string>

inline void bad(const unsigned n) {
    if (n == 0)
        return;
    auto tmp_var = std::string{};
    tmp_var.push_back('*');  // do something...
    return bad(n-1);
}
