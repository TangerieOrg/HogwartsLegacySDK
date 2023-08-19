#include "FGameplayTagContainer.hpp"
#include "UActorProvider.hpp"
#include "UActor_SceneRigCamera.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UNameProvider.hpp"
UActor_SceneRigCamera* UActor_SceneRigCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_SceneRigCamera");
    return (UActor_SceneRigCamera*)res;
}
