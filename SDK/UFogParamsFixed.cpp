#include "FFogParameters.hpp"
#include "UFogParams.hpp"
#include "UFogParamsFixed.hpp"
UFogParamsFixed* UFogParamsFixed::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.FogParamsFixed");
    return (UFogParamsFixed*)res;
}
