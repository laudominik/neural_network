//
// Created by Dominik Lau on 25/09/2022.
//

#include "Neuron.h"

nn::Neuron::Neuron(double activation, nn::Neuron::PreviousLayerType previousLayer):
activation(activation),
previousLayer(std::move(previousLayer)) {

}
