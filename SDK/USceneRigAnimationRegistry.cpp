#include "FSceneRigAnimationRegsitryAnim.hpp"
#include "FSceneRigAnimationRegsitryInheritRegistry.hpp"
#include "UDataAsset.hpp"
#include "USceneRigAnimationRegistry.hpp"
USceneRigAnimationRegistry* USceneRigAnimationRegistry::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigAnimationRegistry");
    return (USceneRigAnimationRegistry*)res;
}
