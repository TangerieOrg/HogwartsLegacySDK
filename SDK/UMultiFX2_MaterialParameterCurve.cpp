#include "UCurveBase.hpp"
#include "UMultiFX2_MaterialParameterBase.hpp"
#include "UMultiFX2_MaterialParameterCurve.hpp"
UMultiFX2_MaterialParameterCurve* UMultiFX2_MaterialParameterCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_MaterialParameterCurve");
    return (UMultiFX2_MaterialParameterCurve*)res;
}
