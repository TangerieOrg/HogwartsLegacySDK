#include "AActor.hpp"
#include "USceneActionState_SpawnActor.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_SpawnActor* USceneActionState_SpawnActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_SpawnActor");
    return (USceneActionState_SpawnActor*)res;
}
