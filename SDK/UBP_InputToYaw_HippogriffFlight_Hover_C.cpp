#include "UBP_InputToYaw_HippogriffFlight_Hover_C.hpp"
#include "UCameraStackBehaviorInputToYawSpeed.hpp"
UBP_InputToYaw_HippogriffFlight_Hover_C* UBP_InputToYaw_HippogriffFlight_Hover_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_InputToYaw_HippogriffFlight_Hover.BP_InputToYaw_HippogriffFlight_Hover_C");
    return (UBP_InputToYaw_HippogriffFlight_Hover_C*)res;
}
