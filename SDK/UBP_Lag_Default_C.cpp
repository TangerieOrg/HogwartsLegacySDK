#include "UBP_Lag_Default_C.hpp"
#include "UCameraStackBehaviorLag.hpp"
UBP_Lag_Default_C* UBP_Lag_Default_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_Lag_Default.BP_Lag_Default_C");
    return (UBP_Lag_Default_C*)res;
}
