//
// Created by Dominik Lau on 26/09/2022.
//

#include "HiddenNeuron.h"

double nn::HiddenNeuron::getActivation() {
    if(wasActivationCalculated) return activation;
    for(auto& [weight, neuron] : previousLayer){
        activation += weight * neuron->getActivation();
    }
    wasActivationCalculated = true;
    return activation;
}

nn::HiddenNeuron::HiddenNeuron(nn::Neuron::PreviousLayerType previousLayer):
Neuron({}, std::move(previousLayer)) {

}
