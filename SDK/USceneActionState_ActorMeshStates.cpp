#include "USceneActionState_ActorMeshStates.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ActorMeshStates* USceneActionState_ActorMeshStates::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ActorMeshStates");
    return (USceneActionState_ActorMeshStates*)res;
}
