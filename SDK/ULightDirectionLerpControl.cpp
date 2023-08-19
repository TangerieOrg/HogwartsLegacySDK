#include "ULightDirectionLerpControl.hpp"
#include "UObject.hpp"
ULightDirectionLerpControl* ULightDirectionLerpControl::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightDirectionLerpControl");
    return (ULightDirectionLerpControl*)res;
}
