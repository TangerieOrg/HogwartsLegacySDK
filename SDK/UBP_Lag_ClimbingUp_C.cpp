#include "UBP_Lag_ClimbingUp_C.hpp"
#include "UCameraStackBehaviorLag.hpp"
UBP_Lag_ClimbingUp_C* UBP_Lag_ClimbingUp_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_Lag_ClimbingUp.BP_Lag_ClimbingUp_C");
    return (UBP_Lag_ClimbingUp_C*)res;
}
