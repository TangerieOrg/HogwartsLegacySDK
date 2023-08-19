#include "FRuntimeFloatCurve.hpp"
#include "UBoolProvider.hpp"
#include "UBool_Curve.hpp"
UBool_Curve* UBool_Curve::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Bool_Curve");
    return (UBool_Curve*)res;
}
