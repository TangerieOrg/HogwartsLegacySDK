#include "ULightDirectionLerpBinary.hpp"
#include "ULightDirectionLerpIfOne.hpp"
ULightDirectionLerpIfOne* ULightDirectionLerpIfOne::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightDirectionLerpIfOne");
    return (ULightDirectionLerpIfOne*)res;
}
