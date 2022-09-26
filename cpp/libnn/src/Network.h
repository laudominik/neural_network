#pragma once

#include "NetworkConfig.h"

#include <HiddenNeuron.h>
#include <InputNeuron.h>

namespace nn {
    using InputType = std::vector<InputNeuron>;

    class Network {
    private:
        using LayerType = std::vector<std::unique_ptr<Neuron>>;
        std::vector<LayerType> layers;

    public:
        explicit Network(InputType input, config::NetworkConfig config);
        virtual ~Network() = default;

    };
}
