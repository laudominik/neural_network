#include "tests/testImgwrapper.cpp"
#include "tests/testNeuronActivationCalculation.cpp"
#include "tests/testNetworkConfig.cpp"

int main() {
    testLoad();
    testNeuronActivationCalculation();
    testConfig();
    testSizeMismatch();
    return 0;
}