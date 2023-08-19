#include "UBP_FollowTargetRotationSpring_HippogriffFlight_Hover_C.hpp"
#include "UCameraStackBehaviorFollowTargetRotationSpring.hpp"
UBP_FollowTargetRotationSpring_HippogriffFlight_Hover_C* UBP_FollowTargetRotationSpring_HippogriffFlight_Hover_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_FollowTargetRotationSpring_HippogriffFlight_Hover.BP_FollowTargetRotationSpring_HippogriffFlight_Hover_C");
    return (UBP_FollowTargetRotationSpring_HippogriffFlight_Hover_C*)res;
}
