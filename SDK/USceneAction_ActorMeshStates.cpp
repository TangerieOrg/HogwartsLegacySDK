#include "USceneAction_ActorMeshStates.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ActorMeshStates* USceneAction_ActorMeshStates::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ActorMeshStates");
    return (USceneAction_ActorMeshStates*)res;
}
