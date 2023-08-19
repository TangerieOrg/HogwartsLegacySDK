#include "USceneActionState_SimpleDialogueSequence.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_SimpleDialogueSequence* USceneActionState_SimpleDialogueSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_SimpleDialogueSequence");
    return (USceneActionState_SimpleDialogueSequence*)res;
}
