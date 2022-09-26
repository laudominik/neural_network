#include "Network.h"

#include <SizeMismatchException.h>

namespace nn {
    Network::Network(InputType input, config::NetworkConfig config) {

        if(input.size() != config.inputSize){
            throw(SizeMismatchException("input size doesn't match that provided in model"));
        }

        layers.reserve(2 + config.layers.size());
        for(auto& neuron: input) {
            layers[0].emplace_back(std::make_unique<InputNeuron>(neuron.getActivation()));
        }
    }
}