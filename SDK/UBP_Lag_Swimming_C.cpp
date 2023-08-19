#include "UBP_Lag_Swimming_C.hpp"
#include "UCameraStackBehaviorLag.hpp"
UBP_Lag_Swimming_C* UBP_Lag_Swimming_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_Lag_Swimming.BP_Lag_Swimming_C");
    return (UBP_Lag_Swimming_C*)res;
}
