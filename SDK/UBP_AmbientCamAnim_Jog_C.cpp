#include "UBP_AmbientCamAnim_Jog_C.hpp"
#include "UBP_AnimationSequence_AdditiveBase_C.hpp"
UBP_AmbientCamAnim_Jog_C* UBP_AmbientCamAnim_Jog_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/AmbientMovement/BP_AmbientCamAnim_Jog.BP_AmbientCamAnim_Jog_C");
    return (UBP_AmbientCamAnim_Jog_C*)res;
}
