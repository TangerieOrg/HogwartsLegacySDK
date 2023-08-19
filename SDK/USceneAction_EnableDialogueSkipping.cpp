#include "USceneAction_EnableDialogueSkipping.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_EnableDialogueSkipping* USceneAction_EnableDialogueSkipping::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_EnableDialogueSkipping");
    return (USceneAction_EnableDialogueSkipping*)res;
}
