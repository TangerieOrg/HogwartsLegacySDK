#include "FActorMeshSetupName.hpp"
#include "USceneAction_ActorMeshSetup.hpp"
#include "USceneAction_ActorMeshStates.hpp"
USceneAction_ActorMeshSetup* USceneAction_ActorMeshSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ActorMeshSetup");
    return (USceneAction_ActorMeshSetup*)res;
}
