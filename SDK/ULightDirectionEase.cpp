#include "ELerpEasingType.hpp"
#include "ULightDirectionEase.hpp"
#include "ULightDirectionLerpControl.hpp"
ULightDirectionEase* ULightDirectionEase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightDirectionEase");
    return (ULightDirectionEase*)res;
}
