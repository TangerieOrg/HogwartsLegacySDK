#include "UBP_LookAt_ClimbingLedge_C.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
UBP_LookAt_ClimbingLedge_C* UBP_LookAt_ClimbingLedge_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAt_ClimbingLedge.BP_LookAt_ClimbingLedge_C");
    return (UBP_LookAt_ClimbingLedge_C*)res;
}
