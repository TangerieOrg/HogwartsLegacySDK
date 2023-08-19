#include "ABP_ThirdPersonCameraStackActor_C.hpp"
#include "ACameraStackActor.hpp"
#include "UCameraStackAnimationComponent.hpp"
#include "UCameraStackVolumeInfluenceComponent.hpp"
ABP_ThirdPersonCameraStackActor_C* ABP_ThirdPersonCameraStackActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/BP_ThirdPersonCameraStackActor.BP_ThirdPersonCameraStackActor_C");
    return (ABP_ThirdPersonCameraStackActor_C*)res;
}
