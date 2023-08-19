#include "ULightDirectionLerpBinary.hpp"
#include "ULightDirectionLerpControl.hpp"
ULightDirectionLerpBinary* ULightDirectionLerpBinary::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightDirectionLerpBinary");
    return (ULightDirectionLerpBinary*)res;
}
