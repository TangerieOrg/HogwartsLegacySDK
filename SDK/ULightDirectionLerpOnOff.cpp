#include "ULightDirectionLerpBinary.hpp"
#include "ULightDirectionLerpOnOff.hpp"
ULightDirectionLerpOnOff* ULightDirectionLerpOnOff::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightDirectionLerpOnOff");
    return (ULightDirectionLerpOnOff*)res;
}
