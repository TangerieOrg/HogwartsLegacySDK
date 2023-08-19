#include "UBP_AmbientCamAnim_HippogriffFlight_C.hpp"
#include "UBP_AnimationSequence_AdditiveBase_C.hpp"
UBP_AmbientCamAnim_HippogriffFlight_C* UBP_AmbientCamAnim_HippogriffFlight_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/AmbientMovement/BP_AmbientCamAnim_HippogriffFlight.BP_AmbientCamAnim_HippogriffFlight_C");
    return (UBP_AmbientCamAnim_HippogriffFlight_C*)res;
}
