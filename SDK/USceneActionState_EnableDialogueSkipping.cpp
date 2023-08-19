#include "USceneActionState_EnableDialogueSkipping.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_EnableDialogueSkipping* USceneActionState_EnableDialogueSkipping::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_EnableDialogueSkipping");
    return (USceneActionState_EnableDialogueSkipping*)res;
}
