#pragma once

#include <cmath>

namespace nn::function {

    inline double sigmoid(double x){
        return 1/(1 + exp(-1 * x));
    }

}
