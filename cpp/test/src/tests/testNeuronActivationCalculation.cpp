#include <Neuron.h>
#include <HiddenNeuron.h>
#include <InputNeuron.h>
#include "../util/TestRunner.h"

#include <cassert>
#include <string>

inline void testNeuronActivationCalculation(){
    using namespace nn;
    InputNeuron inputNeuron(10.0);
    HiddenNeuron hiddenNeuron({{0.1, &inputNeuron}});
    MY_ASSERT(hiddenNeuron.getActivation() == 1.0);
    MY_ASSERT(hiddenNeuron.getActivation() == 1.0);
    HiddenNeuron hiddenNeuron1({{0.1, &inputNeuron}, {0.5, &inputNeuron}});
    MY_ASSERT(hiddenNeuron1.getActivation() == 6.0);
    MY_ASSERT(hiddenNeuron1.getActivation() == 6.0);
}