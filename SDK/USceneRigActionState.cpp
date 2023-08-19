#include "USceneRigActionState.hpp"
#include "UTimeRigIntervalState.hpp"
USceneRigActionState* USceneRigActionState::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigActionState");
    return (USceneRigActionState*)res;
}
