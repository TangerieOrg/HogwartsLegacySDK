#include "UAnimSequenceBase.hpp"
#include "UCameraFixupOperations.hpp"
#include "UDialogueLineRuleState.hpp"
#include "UDialogueLineRuleState_Camera.hpp"
#include "USceneAction_Animation.hpp"
#include "USceneAction_CameraFixup.hpp"
#include "USceneAction_Transform.hpp"
UDialogueLineRuleState_Camera* UDialogueLineRuleState_Camera::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRuleState_Camera");
    return (UDialogueLineRuleState_Camera*)res;
}
