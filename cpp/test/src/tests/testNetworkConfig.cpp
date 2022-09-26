#include "../util/TestRunner.h"

#include <Network.h>
#include <ActivationFunctions.h>

#include <cassert>
#include <string>

inline void testConfig(){
    nn::Network network(
            std::vector<nn::InputNeuron>(256, 0.5),
            {.inputSize = 256, .outputSize = 10, .activationFunction = nn::function::sigmoid,
                 .layers = {16, 16}});
}

inline void testSizeMismatch(){
    try {
        nn::Network network(
                std::vector<nn::InputNeuron>(255, 0.5),
                {.inputSize = 256, .outputSize = 10, .activationFunction = nn::function::sigmoid,
                        .layers = {16, 16}});
        MY_ASSERT(false);
    } catch (std::exception& e){
        MY_ASSERT(strcmp(e.what(), "input size doesn't match that provided in model") == 0);
    }
}