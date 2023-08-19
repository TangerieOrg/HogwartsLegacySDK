#include "ETraceTypeQuery.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_FindLedgeFromAbove.hpp"
UTransform_FindLedgeFromAbove* UTransform_FindLedgeFromAbove::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_FindLedgeFromAbove");
    return (UTransform_FindLedgeFromAbove*)res;
}
