#include "UBP_WalkAndTalkSplineLookahead_C.hpp"
#include "UCameraStackBehaviorLookAheadAlongSpline.hpp"
UBP_WalkAndTalkSplineLookahead_C* UBP_WalkAndTalkSplineLookahead_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_WalkAndTalkSplineLookahead.BP_WalkAndTalkSplineLookahead_C");
    return (UBP_WalkAndTalkSplineLookahead_C*)res;
}
