#include "ETraceTypeQuery.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_FindWallInForwardDirection.hpp"
UTransform_FindWallInForwardDirection* UTransform_FindWallInForwardDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_FindWallInForwardDirection");
    return (UTransform_FindWallInForwardDirection*)res;
}
