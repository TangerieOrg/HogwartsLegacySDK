#include "UBP_Lag_HippogriffFlight_Hover_C.hpp"
#include "UCameraStackBehaviorLag.hpp"
UBP_Lag_HippogriffFlight_Hover_C* UBP_Lag_HippogriffFlight_Hover_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_Lag_HippogriffFlight_Hover.BP_Lag_HippogriffFlight_Hover_C");
    return (UBP_Lag_HippogriffFlight_Hover_C*)res;
}
