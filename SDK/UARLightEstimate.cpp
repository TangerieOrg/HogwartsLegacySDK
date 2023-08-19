#include "UARLightEstimate.hpp"
#include "UObject.hpp"
UARLightEstimate* UARLightEstimate::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARLightEstimate");
    return (UARLightEstimate*)res;
}
