#include "FRuntimeCurveLinearColor.hpp"
#include "UColorProvider.hpp"
#include "UColor_Curve.hpp"
UColor_Curve* UColor_Curve::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Color_Curve");
    return (UColor_Curve*)res;
}
