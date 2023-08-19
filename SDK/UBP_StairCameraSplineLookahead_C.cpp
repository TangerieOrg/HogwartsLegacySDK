#include "UBP_StairCameraSplineLookahead_C.hpp"
#include "UCameraStackBehaviorLookAheadAlongSpline.hpp"
UBP_StairCameraSplineLookahead_C* UBP_StairCameraSplineLookahead_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_StairCameraSplineLookahead.BP_StairCameraSplineLookahead_C");
    return (UBP_StairCameraSplineLookahead_C*)res;
}
