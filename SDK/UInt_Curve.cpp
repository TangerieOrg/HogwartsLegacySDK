#include "FRuntimeFloatCurve.hpp"
#include "UIntProvider.hpp"
#include "UInt_Curve.hpp"
UInt_Curve* UInt_Curve::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Int_Curve");
    return (UInt_Curve*)res;
}
