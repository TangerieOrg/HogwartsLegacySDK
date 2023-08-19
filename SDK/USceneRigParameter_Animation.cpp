#include "UAnimationProvider.hpp"
#include "USceneRigParameter.hpp"
#include "USceneRigParameter_Animation.hpp"
USceneRigParameter_Animation* USceneRigParameter_Animation::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameter_Animation");
    return (USceneRigParameter_Animation*)res;
}
