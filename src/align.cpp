// align.cpp — part of face-swap-local.

#include "faceswaplocal/align.h"

#include <cstdio>

namespace faceswaplocal {

Align::Align(const std::string& config_path)
    : config_path_(config_path) {}

void Align::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Align::run() {
    if (verbose_) std::fprintf(stderr, "[face-swap-local] align: run\n");
    // core logic lives here
    return true;
}

}  // namespace faceswaplocal
