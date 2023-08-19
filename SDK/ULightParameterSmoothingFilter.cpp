#include "ULightParameterSmoothing.hpp"
#include "ULightParameterSmoothingFilter.hpp"
ULightParameterSmoothingFilter* ULightParameterSmoothingFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightParameterSmoothingFilter");
    return (ULightParameterSmoothingFilter*)res;
}
