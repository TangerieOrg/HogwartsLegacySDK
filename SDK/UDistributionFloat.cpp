#include "UDistribution.hpp"
#include "UDistributionFloat.hpp"
UDistributionFloat* UDistributionFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DistributionFloat");
    return (UDistributionFloat*)res;
}
