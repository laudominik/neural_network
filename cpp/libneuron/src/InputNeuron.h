#pragma once

#include "Neuron.h"

namespace nn {
    class InputNeuron : public Neuron {
    public:
        InputNeuron(double activation);
        double getActivation() override;
    };
}