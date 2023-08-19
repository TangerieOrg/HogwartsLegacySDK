#include "FDialogueLineReference.hpp"
#include "USceneActionState_Dialogue.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_Dialogue* USceneActionState_Dialogue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_Dialogue");
    return (USceneActionState_Dialogue*)res;
}
