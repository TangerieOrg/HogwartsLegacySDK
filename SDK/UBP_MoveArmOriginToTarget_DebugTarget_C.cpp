#include "UBP_MoveArmOriginToTarget_DebugTarget_C.hpp"
#include "UCameraStackBehaviorMoveArmOriginToTarget.hpp"
UBP_MoveArmOriginToTarget_DebugTarget_C* UBP_MoveArmOriginToTarget_DebugTarget_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_MoveArmOriginToTarget_DebugTarget.BP_MoveArmOriginToTarget_DebugTarget_C");
    return (UBP_MoveArmOriginToTarget_DebugTarget_C*)res;
}
