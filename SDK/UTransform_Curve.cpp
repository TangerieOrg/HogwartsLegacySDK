#include "FRuntimeCurveVector.hpp"
#include "FTransform.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_Curve.hpp"
UTransform_Curve* UTransform_Curve::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Transform_Curve");
    return (UTransform_Curve*)res;
}
