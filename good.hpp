#include <string>
#include <utility>

struct Good {
    std::pair<std::string, void *> *tmp_var_chain = nullptr;
    void operator()(const unsigned n) {
        if (n == 0)
            return;
        tmp_var_chain = new std::pair<std::string, void *>{{}, tmp_var_chain};
        auto& tmp_var = tmp_var_chain->first;
        tmp_var.push_back('*');  // do something...
        (*this)(n-1);
    }
    ~Good() {
        while (tmp_var_chain) {
            auto *const rest = decltype(tmp_var_chain)(tmp_var_chain->second);
            delete tmp_var_chain;
            tmp_var_chain = rest;
        }
    }
};
