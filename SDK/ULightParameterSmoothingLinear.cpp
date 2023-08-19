#include "ULightParameterSmoothing.hpp"
#include "ULightParameterSmoothingLinear.hpp"
ULightParameterSmoothingLinear* ULightParameterSmoothingLinear::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightParameterSmoothingLinear");
    return (ULightParameterSmoothingLinear*)res;
}
