#include "UBP_AmbientCamAnim_Idle_C.hpp"
#include "UBP_AnimationSequence_AdditiveBase_C.hpp"
UBP_AmbientCamAnim_Idle_C* UBP_AmbientCamAnim_Idle_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/AmbientMovement/BP_AmbientCamAnim_Idle.BP_AmbientCamAnim_Idle_C");
    return (UBP_AmbientCamAnim_Idle_C*)res;
}
