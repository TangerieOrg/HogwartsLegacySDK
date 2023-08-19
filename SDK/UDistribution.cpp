#include "UDistribution.hpp"
#include "UObject.hpp"
UDistribution* UDistribution::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Distribution");
    return (UDistribution*)res;
}
