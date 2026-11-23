// swap.cpp — part of face-swap-local.

#include "faceswaplocal/swap.h"

#include <cstdio>

namespace faceswaplocal {

Swap::Swap(const std::string& config_path)
    : config_path_(config_path) {}

void Swap::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Swap::run() {
    if (verbose_) std::fprintf(stderr, "[face-swap-local] swap: run\n");
    // core logic lives here
    return true;
}

}  // namespace faceswaplocal
