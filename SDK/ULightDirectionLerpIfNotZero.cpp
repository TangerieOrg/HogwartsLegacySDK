#include "ULightDirectionLerpBinary.hpp"
#include "ULightDirectionLerpIfNotZero.hpp"
ULightDirectionLerpIfNotZero* ULightDirectionLerpIfNotZero::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightDirectionLerpIfNotZero");
    return (ULightDirectionLerpIfNotZero*)res;
}
