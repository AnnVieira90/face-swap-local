// main.cpp — entry point. Wires config and subsystems together.

#include "faceswaplocal/settings.h"
#include "faceswaplocal/swap.h"
#include "faceswaplocal/detect.h"
#include "faceswaplocal/align.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    faceswaplocal::Settings settings = faceswaplocal::Settings::load_default();
    faceswaplocal::Swap swap(settings.store_path);
    faceswaplocal::Detect detect(settings.store_path);
    faceswaplocal::Align align(settings.store_path);
    std::fprintf(stderr, "[face-swap-local] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
