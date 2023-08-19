#include "UBP_Lag_JumpVault_C.hpp"
#include "UCameraStackBehaviorLag.hpp"
UBP_Lag_JumpVault_C* UBP_Lag_JumpVault_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_Lag_JumpVault.BP_Lag_JumpVault_C");
    return (UBP_Lag_JumpVault_C*)res;
}
