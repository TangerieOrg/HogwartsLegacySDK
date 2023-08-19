#include "ULevelSequencePlayer.hpp"
#include "USceneRigState.hpp"
#include "UTimeRigState.hpp"
USceneRigState* USceneRigState::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigState");
    return (USceneRigState*)res;
}
