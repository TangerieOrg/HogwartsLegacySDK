#include "FAnimationTrack.hpp"
#include "UAnimationComponent.hpp"
#include "USceneActionState_Animation.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_Animation* USceneActionState_Animation::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_Animation");
    return (USceneActionState_Animation*)res;
}
