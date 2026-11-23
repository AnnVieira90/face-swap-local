// detect.cpp — part of face-swap-local.

#include "faceswaplocal/detect.h"

#include <cstdio>

namespace faceswaplocal {

Detect::Detect(const std::string& config_path)
    : config_path_(config_path) {}

void Detect::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Detect::run() {
    if (verbose_) std::fprintf(stderr, "[face-swap-local] detect: run\n");
    // core logic lives here
    return true;
}

}  // namespace faceswaplocal
