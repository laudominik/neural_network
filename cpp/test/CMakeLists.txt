link_directories(${nnmain_SOURCE_DIR}/libnn/src
                 ${nnmain_SOURCE_DIR}/libwrapper/src
                 ${nnmain_SOURCE_DIR}/libneuron/src)
include_directories(${nnmain_SOURCE_DIR}/libnn/src
                    ${nnmain_SOURCE_DIR}/libwrapper/src
                    ${nnmain_SOURCE_DIR}/libneuron/src)


add_executable(test src/TestMain.cpp src/tests/testImgwrapper.cpp src/tests/testNeuronActivationCalculation.cpp src/util/TestRunner.cpp src/util/TestRunner.h src/tests/testNetworkConfig.cpp)
target_link_libraries(test PRIVATE wrapper nn neuron)