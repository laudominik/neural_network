link_directories(${nnmain_SOURCE_DIR}/libneuron/src
                 ${nnmain_SOURCE_DIR}/liberror/src)

include_directories(${nnmain_SOURCE_DIR}/libneuron/src
                    ${nnmain_SOURCE_DIR}/liberror/src)

add_library(nn src/Network.cpp src/Network.h src/NetworkConfig.h src/ActivationFunctions.h)
target_link_libraries(nn PRIVATE wrapper neuron error)