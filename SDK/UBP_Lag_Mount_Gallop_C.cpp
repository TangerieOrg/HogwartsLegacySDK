#include "UBP_Lag_Mount_Gallop_C.hpp"
#include "UCameraStackBehaviorLag.hpp"
UBP_Lag_Mount_Gallop_C* UBP_Lag_Mount_Gallop_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_Lag_Mount_Gallop.BP_Lag_Mount_Gallop_C");
    return (UBP_Lag_Mount_Gallop_C*)res;
}
