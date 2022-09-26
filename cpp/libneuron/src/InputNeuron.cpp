//
// Created by Dominik Lau on 26/09/2022.
//

#include "InputNeuron.h"

double nn::InputNeuron::getActivation() {
    return activation;
}

nn::InputNeuron::InputNeuron(double activation): Neuron(activation, {}) {

}
