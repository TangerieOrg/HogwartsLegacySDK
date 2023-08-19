#include "UDistribution.hpp"
#include "UDistributionVector.hpp"
UDistributionVector* UDistributionVector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DistributionVector");
    return (UDistributionVector*)res;
}
