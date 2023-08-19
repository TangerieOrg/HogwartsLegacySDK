#include "UActorSpawner.hpp"
#include "USceneAction_SpawnActor.hpp"
#include "USceneRigActionBase.hpp"
#include "UTimeRigElement.hpp"
USceneAction_SpawnActor* USceneAction_SpawnActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_SpawnActor");
    return (USceneAction_SpawnActor*)res;
}
