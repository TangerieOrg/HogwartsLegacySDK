#include "FDialogueLineReference.hpp"
#include "USceneActionState_DialogueLine.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_DialogueLine* USceneActionState_DialogueLine::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_DialogueLine");
    return (USceneActionState_DialogueLine*)res;
}
