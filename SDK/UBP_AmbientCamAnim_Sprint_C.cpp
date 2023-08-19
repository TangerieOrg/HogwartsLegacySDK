#include "UBP_AmbientCamAnim_Sprint_C.hpp"
#include "UBP_AnimationSequence_AdditiveBase_C.hpp"
UBP_AmbientCamAnim_Sprint_C* UBP_AmbientCamAnim_Sprint_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/AmbientMovement/BP_AmbientCamAnim_Sprint.BP_AmbientCamAnim_Sprint_C");
    return (UBP_AmbientCamAnim_Sprint_C*)res;
}
