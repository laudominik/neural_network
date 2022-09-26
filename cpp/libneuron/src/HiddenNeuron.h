#pragma once

#include "Neuron.h"

namespace nn {
    class HiddenNeuron : public Neuron {
    public:
        HiddenNeuron(PreviousLayerType previousLayer);
        double getActivation() override;
    };
}
