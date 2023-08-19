#include "UBP_Lag_Falling_C.hpp"
#include "UCameraStackBehaviorLag.hpp"
UBP_Lag_Falling_C* UBP_Lag_Falling_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_Lag_Falling.BP_Lag_Falling_C");
    return (UBP_Lag_Falling_C*)res;
}
