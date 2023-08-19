#include "UDistributionFloat.hpp"
#include "UDistributionFloatUniform.hpp"
UDistributionFloatUniform* UDistributionFloatUniform::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DistributionFloatUniform");
    return (UDistributionFloatUniform*)res;
}
