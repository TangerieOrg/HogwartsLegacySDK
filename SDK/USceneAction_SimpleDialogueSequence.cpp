#include "FActionParameter_FString.hpp"
#include "USceneAction_SimpleDialogueSequence.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_SimpleDialogueSequence* USceneAction_SimpleDialogueSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_SimpleDialogueSequence");
    return (USceneAction_SimpleDialogueSequence*)res;
}
