#include "UBP_AdjustArmFromTargetVelocity_HippogriffFlight_C.hpp"
#include "UCameraStackBehaviorAdjustArmFromTargetVelocity.hpp"
UBP_AdjustArmFromTargetVelocity_HippogriffFlight_C* UBP_AdjustArmFromTargetVelocity_HippogriffFlight_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_AdjustArmFromTargetVelocity_HippogriffFlight.BP_AdjustArmFromTargetVelocity_HippogriffFlight_C");
    return (UBP_AdjustArmFromTargetVelocity_HippogriffFlight_C*)res;
}
