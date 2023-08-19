#include "FInterpCurveFloat.hpp"
#include "UDistributionFloat.hpp"
#include "UDistributionFloatConstantCurve.hpp"
UDistributionFloatConstantCurve* UDistributionFloatConstantCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DistributionFloatConstantCurve");
    return (UDistributionFloatConstantCurve*)res;
}
