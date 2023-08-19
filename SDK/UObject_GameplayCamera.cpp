#include "UActorProvider.hpp"
#include "UObject_GameplayCamera.hpp"
UObject_GameplayCamera* UObject_GameplayCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Object_GameplayCamera");
    return (UObject_GameplayCamera*)res;
}
