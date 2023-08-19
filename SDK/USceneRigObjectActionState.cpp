#include "USceneRigActionState.hpp"
#include "USceneRigObjectActionState.hpp"
USceneRigObjectActionState* USceneRigObjectActionState::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigObjectActionState");
    return (USceneRigObjectActionState*)res;
}
