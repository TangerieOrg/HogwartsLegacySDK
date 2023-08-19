#include "UClass.hpp"
#include "UHoverDroneConfigObject.hpp"
#include "UObject.hpp"
UHoverDroneConfigObject* UHoverDroneConfigObject::StaticClass() {
    static auto res = find_uobject("Class /Script/HoverDrone.HoverDroneConfigObject");
    return (UHoverDroneConfigObject*)res;
}
