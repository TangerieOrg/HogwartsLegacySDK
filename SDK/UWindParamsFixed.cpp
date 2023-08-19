#include "FRuntimeFloatCurve.hpp"
#include "FWindParametersSampleTime.hpp"
#include "UWindGustController.hpp"
#include "UWindParams.hpp"
#include "UWindParamsFixed.hpp"
UWindParamsFixed* UWindParamsFixed::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WindParamsFixed");
    return (UWindParamsFixed*)res;
}
