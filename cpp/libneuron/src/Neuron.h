#pragma once

#include <vector>

namespace nn {
    class Neuron {
    protected:
        using PreviousLayerType = std::vector<std::pair<double, Neuron*>>;

        Neuron(double activation, PreviousLayerType previousLayer);

        PreviousLayerType previousLayer;
        bool wasActivationCalculated{false};
        double activation{};
    public:
        virtual double getActivation() = 0;

    };
}