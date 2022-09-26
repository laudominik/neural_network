#pragma once

#include <vector>
#include <cstdint>
#include <functional>

namespace nn::config {

    using HiddenLayerConfig = std::vector<uint64_t>;

    struct NetworkConfig {
        uint64_t inputSize;
        uint64_t outputSize;
        std::function<double(double)> activationFunction;
        HiddenLayerConfig layers;
    };
}