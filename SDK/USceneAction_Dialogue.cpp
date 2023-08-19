#include "FActionParameter_DialogueEvent.hpp"
#include "FAudioDialogueFlags.hpp"
#include "UDialogueLineProvider.hpp"
#include "USceneAction_Dialogue.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_Dialogue* USceneAction_Dialogue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_Dialogue");
    return (USceneAction_Dialogue*)res;
}
