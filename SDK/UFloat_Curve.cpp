#include "FRuntimeFloatCurve.hpp"
#include "UFloatProvider.hpp"
#include "UFloat_Curve.hpp"
UFloat_Curve* UFloat_Curve::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Float_Curve");
    return (UFloat_Curve*)res;
}
