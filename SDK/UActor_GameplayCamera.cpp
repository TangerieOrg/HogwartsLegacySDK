#include "UActorProvider.hpp"
#include "UActor_GameplayCamera.hpp"
UActor_GameplayCamera* UActor_GameplayCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_GameplayCamera");
    return (UActor_GameplayCamera*)res;
}
