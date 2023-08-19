#include "UARTrackedGeometry.hpp"
#include "UARTrackedPoint.hpp"
UARTrackedPoint* UARTrackedPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTrackedPoint");
    return (UARTrackedPoint*)res;
}
