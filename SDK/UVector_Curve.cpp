#include "FRuntimeCurveVector.hpp"
#include "UVectorProvider.hpp"
#include "UVector_Curve.hpp"
UVector_Curve* UVector_Curve::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Vector_Curve");
    return (UVector_Curve*)res;
}
