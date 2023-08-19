#include "ETraceTypeQuery.hpp"
#include "FVector.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_CastRay.hpp"
#include "UVectorProvider.hpp"
UTransform_CastRay* UTransform_CastRay::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_CastRay");
    return (UTransform_CastRay*)res;
}
