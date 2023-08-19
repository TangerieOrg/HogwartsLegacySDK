#include "UAnimAsset_TickAssetPlayerProxy.hpp"
#include "UAnimSequencerInstance.hpp"
#include "USceneRigAnimInstance.hpp"
USceneRigAnimInstance* USceneRigAnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigAnimInstance");
    return (USceneRigAnimInstance*)res;
}
